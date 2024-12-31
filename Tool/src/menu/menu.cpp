#include "../pch.h"
#include "../Font/Play-Regular.hpp"
namespace ig = ImGui;
static ImGuiTextFilter filter;
bool start_pos_set = false;
bool start_pos_set2 = false;
bool a = true;
void anim(const char* text, ...) {
    char buffer[1024];
    va_list args;
    va_start(args, text);
    vsnprintf(buffer, sizeof(buffer), text, args);
    va_end(args);
    ImVec2 textSize = ig::CalcTextSize(buffer);
    float windowWidth = ig::GetWindowSize().x;
    float textX = (windowWidth - textSize.x) / 2.0f;
    ig::SetCursorPos(ImVec2(textX, 5.0f));
    static float time = 0.0f;
    time += ig::GetIO().DeltaTime * 3.0f;
    float r = 0.5f + 0.5f * sin(time + 0.0f);
    float g = 0.5f + 0.5f * sin(time + 2.0f);
    float b = 0.5f + 0.5f * sin(time + 4.0f);
    ig::TextColored(ImVec4(r, g, b, 1.0f), "%s", buffer);
}
void Eagletex(const char* text, float FT, float DT, float FO)
{
    static float a = 0.5f;
    static float ST = ig::GetTime();
    float ET = ig::GetTime() - ST;
    if (ET < FT)
    {
        a = ET / FT;
    }
    else if (ET < FT + DT)
    {
        a = 1.0f;
    }
    else if (ET < FT + DT + FO)
    {
        a = 1.0f - (ET - FT - DT) / FO;
    }
    else
    {
        ST = ig::GetTime();
        a = 0.f;
    }
    ImVec4 color = ImVec4(0.57f, 0.f, 1.0f, a);
    ig::TextColored(color, "%s", text);
}
namespace Menu {
    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext())
            return;
        ig::CreateContext();
        ImGui_ImplWin32_Init(hwnd);
        ImGuiIO& io = ig::GetIO();
        io.IniFilename = io.LogFilename = nullptr;
    }
    void Render() {
        if (bShowMenuRen) return;
        ImVec4* colors = ig::GetStyle().Colors;
        colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.f);
        colors[ImGuiCol_Border] = ImVec4(0.f, 0.f, 0.f, 0.f);
        ImGuiIO& io = ig::GetIO();
        (void)io;
#pragma region GLOBALS
        SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine());
        SDK::UWorld* World = SDK::UWorld::GetWorld();
        SDK::URBWorld* OPPWorld = SDK::URBBlueprintLibrary::GetRBWorld();
        if (!IsValid(Engine) || !IsValid(World) || !IsValid(OPPWorld))
            return;
        SDK::ARBGameState* GameState = SDK::URBBlueprintLibrary::GetRBGameState();
        bTrailPlayerAlive = IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer());
        TrailPlayer = bTrailPlayerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer() : nullptr;
        bTrailControllerAlive = bTrailPlayerAlive ? IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer()->RBController) : false;
        TrailController = bTrailControllerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer()->RBController : nullptr;
        bIsLoading = SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen();
        bNoLookInput = bTrailControllerAlive ? TrailController->IsLookInputIgnored() : false;
        bTrailPlayerAlive&& IsValid(TrailPlayer->GetRBPlayerState()) ? fPlayerPing = TrailPlayer->GetRBPlayerState()->Ping : fPlayerPing = 0;
        if (IsValid(GameState)) {
            fStageTime = GameState->IsStageStarted() ? SDK::URBBlueprintLibrary::GetServerTime() - GameState->StageStartedServerTime : 0;
        }
        else {
            LevelSeed = 0;
            fStageTime = 0;
        }
#pragma endregion GLOBALS
        if (!bIsLoading && bTrailPlayerAlive && bTrailControllerAlive && IsValid(SDK::URBBlueprintLibrary::GetRBGameInstance())) {
            if (IsValid(TrailPlayer->GetRBPlayerState())) {
                if (IsValid(GameState) && GameState->IsStageStarted()) {
                    PlayerScore = TrailPlayer->GetRBPlayerState()->Score;
                    CalculatedPlayerScore = 0.0000833333f * (10000 + PlayerScore);
                    PlayerRating = CalcRatingFromScore(CalculatedPlayerScore);
                }
                else {
                    PlayerScore = 0;
                    PlayerRating = "";
                }
            }
        }
        if (ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration))
        {
            ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
            ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);
            Eagletex("[EAGLE]", 0.90f, 0.90f, 0.90f);
            anim("[ %.0f FPS  |  PING %.0f ]", io.Framerate, fPlayerPing);
            ig::Text("Trial Time: %s\nSeed: %d \nRank: %s (%.0f)\n%s",
                utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fStageTime).ToWString()).c_str(), LevelSeed, (const char*)PlayerRating.c_str(), PlayerScore, utf8_encode(SDK::UGameplayStatics::GetCurrentLevelName(World, true).ToWString()).c_str());
            ig::End();
        }
        colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 1.f);
    }
    std::string CalcRatingFromScore(float Score) {
        switch (SDK::URBUIBlueprintLibrary::NormalizedScoreToRating(Score)) {
        case SDK::EPlayerTrialRating::F:        return "F";
        case SDK::EPlayerTrialRating::D:        return "D";
        case SDK::EPlayerTrialRating::DPlus:    return "D+";
        case SDK::EPlayerTrialRating::CMinus:   return "C-";
        case SDK::EPlayerTrialRating::C:        return "C";
        case SDK::EPlayerTrialRating::CPlus:    return "C+";
        case SDK::EPlayerTrialRating::BMinus:   return "B-";
        case SDK::EPlayerTrialRating::B:        return "B";
        case SDK::EPlayerTrialRating::BPlus:    return "B+";
        case SDK::EPlayerTrialRating::AMinus:   return "A-";
        case SDK::EPlayerTrialRating::A:        return "A";
        case SDK::EPlayerTrialRating::APlus:    return "A+";
        default:                                return "BAD";
        }
    }
    bool IsValid(const SDK::UObject* Object) {
        return SDK::UKismetSystemLibrary::IsValid(Object);
    }
    std::string utf8_encode(const std::wstring& wstr) {
        if (wstr.empty())
            return std::string();
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }
}


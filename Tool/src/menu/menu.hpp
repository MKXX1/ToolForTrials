#pragma once
#include "../pch.h"
namespace Menu {
    void InitializeContext(HWND hwnd);
    void Render();
    std::string CalcRatingFromScore(float Score);
    bool IsValid(const SDK::UObject* Object);
    std::string utf8_encode(const std::wstring& wstr);
    inline bool bShowOver = true;
    inline bool bIsLoading = false;
    inline bool bNoLookInput = false;
    inline bool bConsoleEnabled = false;
    inline bool bShowMenuRen = false;
    inline SDK::ARBPlayer* TrailPlayer = nullptr;
    inline SDK::ARBController* TrailController = nullptr;
    inline bool bTrailPlayerAlive = false;
    inline bool bTrailControllerAlive = false;
    inline float fPlayerPing = 0;
    inline float fStageTime = 0;
    inline int LevelSeed = 0;
    inline float PlayerScore;
    inline float CalculatedPlayerScore;
    inline std::string PlayerRating;
}

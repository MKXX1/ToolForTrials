#pragma once

#include <d3d11.h>
#include <dxgi1_2.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

namespace DX11 {
    void Hook(HWND hwnd);
    void Unhook();
}

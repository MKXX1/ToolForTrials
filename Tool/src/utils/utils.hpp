#pragma once
#include "../PCH.h"

enum RenderingBackend_t {
	NONE = 0,

	DIRECTX11,
	DIRECTX12,
};

namespace Utils {

	inline HWND mainWindow = nullptr;
	inline HINSTANCE TotalInstance;
	inline bool TexturesLoaded = false;

	void SetRenderingBackend(RenderingBackend_t eRenderingBackend);
	RenderingBackend_t GetRenderingBackend( );
	const char* RenderingBackendToStr( );

	HWND GetProcessWindow( );
	void UnloadDLL( );
	
	HMODULE GetCurrentImageBase( );

	int GetCorrectDXGIFormat(int eCurrentFormat);
}

namespace U = Utils;

#pragma once
#include <Windows.h>

LRESULT CALLBACK  WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Wind_info
{
public:
	const wchar_t* Title = L"Title";

	int width = 640;
	int height = 480;

	DWORD style = WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU;
};

class Window
{
public:
	Window(Wind_info = Wind_info());
	Window(const Window&) = delete;
	Window& operator= (const Window&) = delete;
	HWND GetHWND();
	~Window();

	bool ProcessMassages();
private:
	HINSTANCE m_hInstance;
	HWND m_hWnd;
};



//#include <iostream>
//#include "Window.h"
//
//int main()
//{
//	std::cout << "Creating Window\n";
//
//	Window* pWindow = new Window();
//
//	bool running = true;
//
//	HDC hdc = GetDC(pWindow->GetHWND());
//
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 200 / 2; j++)
//		{
//			SetPixel(hdc, j, i, RGB(rand() % 255, rand() % 255, rand() % 255));
//		}
//	}
//
//	while (running)
//	{
//		if (!pWindow->ProcessMassages())
//		{
//			std::cout << "Closing Window\n";
//			running = false;
//		}
//
//		std::cout << "ok!!!\n";
//
//		Sleep(10);
//	}
//
//	delete pWindow;
//
//	return 0;
//}
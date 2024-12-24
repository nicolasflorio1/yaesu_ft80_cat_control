#include <windows.h>
#include "YaesuFT80C_CAT_main.h"

using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	YaesuFT80CCATControl::YaesuFT80C_CAT_main form;
	Application::Run(% form);

	return 0;
}
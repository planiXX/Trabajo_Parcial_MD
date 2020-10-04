#include "MainForm.h"

using namespace System;


[STAThread]

void main()
{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew MA265TrabajoParcialGrupo1::MainForm());
}
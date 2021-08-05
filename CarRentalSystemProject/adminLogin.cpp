#include "adminLogin.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CarRentalSystemProject::adminLogin form;
	Application::Run(% form);
}
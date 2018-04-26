#include "Login.h"
#include "home.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	musicImprove::Login form;
	Application::Run(%form);
}

/*void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Boton es el nombre del proyecto
	musicImprove::Login form;
	Application::Run(%form);
}*/

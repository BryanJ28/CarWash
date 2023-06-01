#include "frmInicioSesion.h" /*Aqui se incluye el archivo de la ventana que queremos que se muestre primero*/

using namespace System;
using namespace System::Windows::Forms;
using namespace LPOOCarwashView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmInicioSesion ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmLogin*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}
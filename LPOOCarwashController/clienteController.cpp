#include "ClienteController.h"

using namespace System::IO; // para trabajar con archivos controller
using namespace System;
using namespace LPOOCarwashController;
using namespace LPOOCarwashModel;

clienteController::clienteController() {

}

/*Funcion para buscar al usuario en Cliente*/
int clienteController::buscarUsuarioEnCliente(String^ nombre, String^ apellido, String^ identificacion) {
	int clase = 0;
	List<Cliente^>^ listaClienteEncontrados = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";
	for each (String ^ lineaCliente in lineas) {
		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		String^ nombreCliente = datos[0];
		String^ apellidoCliente = datos[1];
		String^ identificacionBuscar = datos[2];
		int identificacionCliente = Convert::ToInt32(datos[2]);
		if (nombreCliente == nombre && identificacionBuscar == identificacion) {
			clase = 1;
			break;
		}
	}

	return clase;
}

/*Funcion para la busqueda de los clientes*/
List<Cliente^>^ clienteController::buscarCliente(String^ nombre, String^ apellido, String^ identificacion) {
	List<Cliente^>^ listaClienteEncontrados = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";
	for each (String^ lineaCliente in lineas) {
		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		String^ nombreCliente = datos[0];
		String^ apellidoCliente = datos[1];
		String^ identificacionBuscar = datos[2];
		int identificacionCliente = Convert::ToInt32(datos[2]);
		int edad = Convert::ToInt32(datos[3]);
		int celular = Convert::ToInt32(datos[4]);
		String^ sexo = datos[5];
		if (nombreCliente->Contains(nombre) && apellidoCliente->Contains(apellido) && identificacionBuscar->Contains(identificacion)) {
			Cliente^ objCliente = gcnew Cliente(nombreCliente, apellidoCliente, identificacionCliente, edad, celular, sexo);
			listaClienteEncontrados->Add(objCliente);
		}
	}
	return listaClienteEncontrados;
}

/*Funcion para la lectura de todos los clientes en la base de datos*/
List<Cliente^>^ clienteController::buscarAll() {
	List<Cliente^>^ listaClienteEncontrados = gcnew List<Cliente^>();
	array<String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";
	for each (String ^ lineaCliente in lineas) {
		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		String^ nombreCliente = datos[0];
		String^ apellidoCliente = datos[1];
		int identificacionCliente = Convert::ToInt32(datos[2]);
		int edad = Convert::ToInt32(datos[3]);
		int celular = Convert::ToInt32(datos[4]);
		String^ sexo = datos[5];
		Cliente^ objCliente = gcnew Cliente(nombreCliente, apellidoCliente, identificacionCliente, edad, celular, sexo);
		listaClienteEncontrados->Add(objCliente);
	}
	return listaClienteEncontrados;
}


/*Funcion para poder eliminar un cliente de la lista*/
void clienteController::eliminarCliente(int identificacion) {
	List<Cliente^>^ listaCliente = buscarAll();
	for (int i = 0; i < listaCliente->Count; i++) {
		if (listaCliente[i]->identificacion == identificacion) {
			listaCliente->RemoveAt(i);
			break;
		}
	}
	escribirArchivoCliente(listaCliente);
}

/*Funcion para escribir en el archivo de texto al realizar modificaciones en este*/
void clienteController::escribirArchivoCliente(List<Cliente^>^ listaCliente) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaCliente->Count);
	for (int i = 0; i < listaCliente->Count; i++) {
		Cliente^ objCliente = listaCliente[i];
		lineasArchivo[i] = objCliente->nombre + ";" + objCliente->apellido + ";" + objCliente->identificacion + ";" + objCliente->edad +";"+ objCliente->celular + ";" + objCliente->sexo;
	}
	File::WriteAllLines("clientes.txt", lineasArchivo);
}

void clienteController::agregarCliente(String^ nombre, String^ apellido, int identificacion, int edad, int celular, String^ sexo) {
	List<Cliente^>^ listaCliente = buscarAll();
	Cliente^ objCliente = gcnew Cliente(nombre, apellido, identificacion, edad, celular, sexo);
	listaCliente->Add(objCliente);
	escribirArchivoCliente(listaCliente);
}

Cliente^ clienteController::buscarClientexIdentificacion(int identificacion) {
	Cliente^ objClienteEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("clientes.txt");
	String^ separadores = ";";
	for each (String ^ lineaCliente in lineas) {
		array<String^>^ datos = lineaCliente->Split(separadores->ToCharArray());
		String^ nombreCliente = datos[0];
		String^ apellidoCliente = datos[1];
		int identificacionCliente = Convert::ToInt32(datos[2]);
		int edad = Convert::ToInt32(datos[3]);
		int celular = Convert::ToInt32(datos[4]);
		String^ sexoCliente = datos[5];


		if (identificacion == identificacionCliente) {
			objClienteEncontrado = gcnew Cliente(nombreCliente, apellidoCliente, identificacionCliente, edad, celular, sexoCliente);
			break;
		}
	}
	return objClienteEncontrado;
}
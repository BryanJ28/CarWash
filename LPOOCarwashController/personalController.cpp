#include "personalController.h"

using namespace System::IO; // para trabajar con archivos controller
using namespace LPOOCarwashController;

personalController::personalController() {

}
int personalController::buscarUsuarioEnPersonal(String^ nombre, String^ apellido, String^ identificacion) {
	int clase = 0;
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	array<String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		String^ nombrePersonal = datos[0];
		String^ apellidoPersonal = datos[1];
		String^ identificacionBuscar = datos[3];
		int identificacionPersonal = Convert::ToInt32(datos[3]);
		if (nombrePersonal == nombre && identificacionBuscar == identificacion) {
			clase = 2;
			break;
		}
	}

	return clase;
}
List<Personal^>^ personalController::buscarPersonal(String^ nombre, String^ apellido) {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	array<String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		String^ nombrePersonal = datos[0];
		String^ apellidoPersonal = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		int identificacion = Convert::ToInt32(datos[3]);
		if (nombrePersonal->Contains(nombre) && apellidoPersonal->Contains(apellido)) {
			Personal^ objPersonal = gcnew Personal(nombrePersonal, apellidoPersonal, sueldo, identificacion);
			listaPersonalEncontrados->Add(objPersonal);
		}
	}
	return listaPersonalEncontrados;
}

List<Personal^>^ personalController::buscarAll() {
	List<Personal^>^ listaPersonalEncontrados = gcnew List<Personal^>();
	array<String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		String^ nombrePersonal = datos[0];
		String^ apellidoPersonal = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		int identificacion = Convert::ToInt32(datos[3]);
		Personal^ objPersonal = gcnew Personal(nombrePersonal, apellidoPersonal, sueldo, identificacion);
		listaPersonalEncontrados->Add(objPersonal);
	}
	return listaPersonalEncontrados;
}

void personalController::eliminarPersonal(int identificacion) {
	List<Personal^>^ listaPersonal = buscarAll();
	for (int i = 0; i < listaPersonal->Count; i++) {
		if (listaPersonal[i]->identificacion == identificacion) {
			listaPersonal->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPersonal);
}

void personalController::escribirArchivo(List<Personal^>^ listaPersonal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPersonal->Count);
	for (int i = 0; i < listaPersonal->Count; i++) { 
		Personal^ objPersonal = listaPersonal[i];
		lineasArchivo[i] = objPersonal->nombre + ";" + objPersonal->apellido + ";" + objPersonal->sueldo + ";" + objPersonal->identificacion;
	}
	File::WriteAllLines("personal.txt", lineasArchivo);
}

Personal^ personalController::buscarPersonalxIdentificacion(int identificacion) {
	Personal^ objPersonalEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("personal.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersonal in lineas) {
		array<String^>^ datos = lineaPersonal->Split(separadores->ToCharArray());
		int identificacionPersonal = Convert::ToInt32(datos[3]);
		String^ nombrePersonal = datos[0];
		String^ apellidoPersonal = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		if (identificacion == identificacionPersonal) {
			objPersonalEncontrado = gcnew Personal(nombrePersonal, apellidoPersonal, sueldo, identificacion);
			break;
		}
	}
	return objPersonalEncontrado;
}

void personalController::actualizarPersonal(Personal^ objPersonal) {
	List<Personal^>^ listaPersonal = buscarAll();
	for (int i = 0; i < listaPersonal->Count; i++) {
		if (listaPersonal[i]->identificacion == objPersonal->identificacion) {
			listaPersonal[i]->nombre = objPersonal->nombre;
			listaPersonal[i]->apellido = objPersonal->apellido;
			listaPersonal[i]->sueldo = objPersonal->sueldo;
			break;
		}
	}
	escribirArchivo(listaPersonal);
}

void personalController::agregarPersonal(String^ nombre, String^ apellido, Double sueldo, int identificacion) {
	List<Personal^>^ listaPersonal = buscarAll();
	Personal^ objPersonal = gcnew Personal(nombre, apellido, sueldo, identificacion);
	listaPersonal->Add(objPersonal);
	escribirArchivo(listaPersonal);
}

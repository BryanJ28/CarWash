#include "gerenteController.h"

using namespace System::IO; // para trabajar con archivos controller
using namespace LPOOCarwashController;

gerenteController::gerenteController() {

}
int gerenteController::buscarUsuarioEnGerente(String^ nombre, String^ apellido, String^ identificacion) {
	int clase = 0;
	List<Gerente^>^ listaGerenteEncontrados = gcnew List<Gerente^>();
	array<String^>^ lineas = File::ReadAllLines("gerente.txt");
	String^ separadores = ";";
	for each (String ^ lineaGerente in lineas) {
		array<String^>^ datos = lineaGerente->Split(separadores->ToCharArray());
		String^ nombreGerente = datos[0];
		String^ apellidoGerente = datos[1];
		String^ identificacionBuscar = datos[3];
		int identificacionGerente = Convert::ToInt32(datos[3]);
		if (nombreGerente == nombre && identificacionBuscar == identificacion) {
			clase = 3;
			break;
		}
	}

	return clase;
}
List<Gerente^>^ gerenteController::buscarGerente(String^ nombre, String^ apellido) {
	List<Gerente^>^ listaGerenteEncontrados = gcnew List<Gerente^>();
	array<String^>^ lineas = File::ReadAllLines("gerente.txt");
	String^ separadores = ";";
	for each (String ^ lineaGerente in lineas) {
		array<String^>^ datos = lineaGerente->Split(separadores->ToCharArray());
		String^ nombreGerente = datos[0];
		String^ apellidoGerente = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		int identificacion = Convert::ToInt32(datos[3]);
		if (nombreGerente->Contains(nombre) && apellidoGerente->Contains(apellido)) {
			Gerente^ objGerente = gcnew Gerente(nombreGerente, apellidoGerente, sueldo, identificacion);
			listaGerenteEncontrados->Add(objGerente);
		}
	}
	return listaGerenteEncontrados;
}

List<Gerente^>^ gerenteController::buscarAll() {
	List<Gerente^>^ listaGerenteEncontrados = gcnew List<Gerente^>();
	array<String^>^ lineas = File::ReadAllLines("gerente.txt");
	String^ separadores = ";";
	for each (String ^ lineaGerente in lineas) {
		array<String^>^ datos = lineaGerente->Split(separadores->ToCharArray());
		String^ nombreGerente = datos[0];
		String^ apellidoGerente = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		int identificacion = Convert::ToInt32(datos[3]);
		Gerente^ objGerente = gcnew Gerente(nombreGerente, apellidoGerente, sueldo, identificacion);
		listaGerenteEncontrados->Add(objGerente);
	}
	return listaGerenteEncontrados;
}

void gerenteController::eliminarGerente(int identificacion) {
	List<Gerente^>^ listaGerente = buscarAll();
	for (int i = 0; i < listaGerente->Count; i++) {
		if (listaGerente[i]->identificacion == identificacion) {
			listaGerente->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaGerente);
}

void gerenteController::escribirArchivo(List<Gerente^>^ listaGerente) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaGerente->Count);
	for (int i = 0; i < listaGerente->Count; i++) {
		Gerente^ objGerente = listaGerente[i];
		lineasArchivo[i] = objGerente->nombre + ";" + objGerente->apellido + ";" + objGerente->sueldo + ";" + objGerente->identificacion;
	}
	File::WriteAllLines("gerente.txt", lineasArchivo);
}

Gerente^ gerenteController::buscarGerentexIdentificacion(int identificacion) {
	Gerente^ objGerenteEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("gerente.txt");
	String^ separadores = ";";
	for each (String ^ lineaGerente in lineas) {
		array<String^>^ datos = lineaGerente->Split(separadores->ToCharArray());
		int identificacionGerente = Convert::ToInt32(datos[3]);
		String^ nombreGerente = datos[0];
		String^ apellidoGerente = datos[1];
		double sueldo = Convert::ToDouble(datos[2]);
		if (identificacion == identificacionGerente) {
			objGerenteEncontrado = gcnew Gerente(nombreGerente, apellidoGerente, sueldo, identificacion);
			break;
		}
	}
	return objGerenteEncontrado;
}

void gerenteController::actualizarGerente(Gerente^ objGerente) {
	List<Gerente^>^ listaGerente = buscarAll();
	for (int i = 0; i < listaGerente->Count; i++) {
		if (listaGerente[i]->identificacion == objGerente->identificacion) {
			listaGerente[i]->nombre = objGerente->nombre;
			listaGerente[i]->apellido = objGerente->apellido;
			listaGerente[i]->sueldo = objGerente->sueldo;
			break;
		}
	}
	escribirArchivo(listaGerente);
}

void gerenteController::agregarGerente(String^ nombre, String^ apellido, Double sueldo, int identificacion) {
	List<Gerente^>^ listaGerente = buscarAll();
	Gerente^ objGerente = gcnew Gerente(nombre, apellido, sueldo, identificacion);
	listaGerente->Add(objGerente);
	escribirArchivo(listaGerente);
}

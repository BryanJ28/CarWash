#include "ServicioController.h"

using namespace System::IO; // para trabajar con archivos controller
using namespace LPOOCarwashController;

ServicioController::ServicioController() {

}

int ServicioController::buscarUsuarioEnServicio(String^ nombre, String^ apellido, String^ identificacion) {
	int clase = 0;
	List<Servicio^>^ listaServicioEncontrados = gcnew List<Servicio^>();
	array<String^>^ lineas = File::ReadAllLines("servicio.txt");
	String^ separadores = ";";
	for each (String ^ lineaServicio in lineas) {
		array<String^>^ datos = lineaServicio->Split(separadores->ToCharArray());
		String^ nombreServicio = datos[0];
		String^ apellidoServicio = datos[1];
		String^ identificacionBuscar = datos[2];
		int identificacionServicio = Convert::ToInt32(datos[2]);
		if (nombreServicio == nombre && identificacionBuscar == identificacion) {
			clase = 2;
			break;
		}
	}

	return clase;
}

List<Servicio^>^ ServicioController::buscarServicio(String^ nombre, String^ apellido) {
	List<Servicio^>^ listaServicioEncontrados = gcnew List<Servicio^>();
	array<String^>^ lineas = File::ReadAllLines("servicio.txt");
	String^ separadores = ";";
	for each (String ^ lineaServicio in lineas) {
		array<String^>^ datos = lineaServicio->Split(separadores->ToCharArray());
		String^ nombreServicio = datos[0];
		String^ apellidoServicio = datos[1];
		String^ placaCarro = datos[3];
		String^ colorCarro = datos[4];
		String^ tipoServicio = datos[5];
		int identificacion = Convert::ToInt32(datos[2]);
		if (nombreServicio->Contains(nombre) && apellidoServicio->Contains(apellido)) {
			Servicio^ objServicio = gcnew Servicio(nombreServicio, apellidoServicio, identificacion, placaCarro, colorCarro, tipoServicio);
			listaServicioEncontrados->Add(objServicio);
		}
	}
	return listaServicioEncontrados;
}

List<Servicio^>^ ServicioController::buscarAll() {
	List<Servicio^>^ listaServicioEncontrados = gcnew List<Servicio^>();
	array<String^>^ lineas = File::ReadAllLines("servicio.txt");
	String^ separadores = ";";
	for each (String ^ lineaServicio in lineas) {
		array<String^>^ datos = lineaServicio->Split(separadores->ToCharArray());
		String^ nombreServicio = datos[0];
		String^ apellidoServicio = datos[1];
		String^ placaCarro = datos[3];
		String^ colorCarro = datos[4];
		String^ tipoServicio = datos[5];
		int identificacion = Convert::ToInt32(datos[2]);
		Servicio^ objServicio = gcnew Servicio(nombreServicio, apellidoServicio, identificacion, placaCarro, colorCarro, tipoServicio);
		listaServicioEncontrados->Add(objServicio);
	}
	return listaServicioEncontrados;
}

void ServicioController::eliminarServicio(int identificacion) {
	List<Servicio^>^ listaServicio = buscarAll();
	for (int i = 0; i < listaServicio->Count; i++) {
		if (listaServicio[i]->identificacion == identificacion) {
			listaServicio->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaServicio);
}
void ServicioController::escribirArchivo(List<Servicio^>^ listaServicio) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaServicio->Count);
	for (int i = 0; i < listaServicio->Count; i++) {
		Servicio^ objServicio = listaServicio[i];
		lineasArchivo[i] = objServicio->nombre + ";" + objServicio->apellido + ";" + objServicio->identificacion + ";" + objServicio->placaCarro + ";" + objServicio->colorCarro + ";" + objServicio->tipoServicio;
	}
	File::WriteAllLines("servicio.txt", lineasArchivo);
}

Servicio^ ServicioController::buscarServicioxIdentificacion(int identificacion) {
	Servicio^ objServicioEncontrado = nullptr;
	array<String^>^ lineas = File::ReadAllLines("servicio.txt");
	String^ separadores = ";";
	for each (String ^ lineaServicio in lineas) {
		array<String^>^ datos = lineaServicio->Split(separadores->ToCharArray());
		int identificacionServicio = Convert::ToInt32(datos[2]);
		String^ nombreServicio = datos[0];
		String^ apellidoServicio = datos[1];
		String^ placaCarro = datos[3];
		String^ colorCarro = datos[4];
		String^ tipoServicio = datos[5];
		if (identificacion == identificacionServicio) {
			objServicioEncontrado = gcnew Servicio(nombreServicio, apellidoServicio, identificacion, placaCarro, colorCarro, tipoServicio);
			break;
		}
	}
	return objServicioEncontrado;
}

void ServicioController::actualizarServicio(Servicio^ objServicio) {
	List<Servicio^>^ listaServicio = buscarAll();
	for (int i = 0; i < listaServicio->Count; i++) {
		if (listaServicio[i]->identificacion == objServicio->identificacion) {
			listaServicio[i]->nombre = objServicio->nombre;
			listaServicio[i]->apellido = objServicio->apellido;
			listaServicio[i]->placaCarro = objServicio->placaCarro;
			listaServicio[i]->colorCarro = objServicio->colorCarro;
			listaServicio[i]->tipoServicio = objServicio->tipoServicio;
			break;
		}
	}
	escribirArchivo(listaServicio);
}

void ServicioController::agregarServicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio) {
	List<Servicio^>^ listaServicio = buscarAll();
	Servicio^ objServicio = gcnew Servicio(nombre, apellido, identificacion, placaCarro, colorCarro, tipoServicio);
	listaServicio->Add(objServicio);
	escribirArchivo(listaServicio);
}
List<Lavado^>^ ServicioController::buscarLavado(int posicion) {
	List<Lavado^>^ listaLavadoEncontrados = gcnew List<Lavado^>();
	array<String^>^ lineas = File::ReadAllLines("lavado.txt");
	String^ separadores = ";";
	for each (String ^ lineaLavado in lineas) {
		array<String^>^ datos = lineaLavado->Split(separadores->ToCharArray());
		int posicionLavado = Convert::ToInt32(datos[0]);
		String^ material = datos[1];
		int duracion = Convert::ToInt32(datos[2]);
		String^ horaInicio = datos[4];
		String^ estado = datos[5];
		if (posicionLavado==posicion) {
			Lavado^ objLavado = gcnew Lavado(posicionLavado, material, duracion, horaInicio, estado);
			listaLavadoEncontrados->Add(objLavado);
		}
	}
	return listaLavadoEncontrados;
}

void ServicioController::pedirServicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio) {
	List<Servicio^>^ listaServicios = buscarAll();
	Servicio^ objServicio = gcnew Servicio(nombre, apellido, identificacion, placaCarro, colorCarro, tipoServicio);
	listaServicios->Add(objServicio);
	escribirArchivo(listaServicios);
}
int ServicioController::VerificarEstado(int posicionButton) {
	int ocupado = 0;
	List<Lavado^>^ listaLavadoEncontrados = gcnew List<Lavado^>();
	array<String^>^ lineas = File::ReadAllLines("lavado.txt");
	String^ separadores = ";";
	for each (String ^ lineaLavado in lineas) {
		array<String^>^ datos = lineaLavado->Split(separadores->ToCharArray());
		int posicionLavado = Convert::ToInt64(datos[0]);
		String^ material = datos[1];
		int duracion = Convert::ToInt32(datos[2]);
		String^ horaInicio = datos[3];
		String^ estado = datos[4];
		if (posicionLavado == posicionButton) {
			if (estado == "Ocupado") {
				ocupado = 1;
			}else{
				ocupado = 0;
			}
		}
	}
	return ocupado;
}
List<Lavado^>^ ServicioController::buscarAllLavado() {
	List<Lavado^>^ listaLavadoEncontrados = gcnew List<Lavado^>();
	array<String^>^ lineas = File::ReadAllLines("lavado.txt");
	String^ separadores = ";";
	for each (String ^ lineaLavado in lineas) {
		array<String^>^ datos = lineaLavado->Split(separadores->ToCharArray());
		int posicion = Convert::ToInt32(datos[0]);
		String^ material = datos[1];
		int duracion = Convert::ToInt32(datos[2]);
		String^ horaInicio = datos[3];
		String^ estado = datos[4];
		Lavado^ objLavado = gcnew Lavado(posicion, material, duracion, horaInicio, estado);
		listaLavadoEncontrados->Add(objLavado);
	}
	return listaLavadoEncontrados;
}
void ServicioController::eliminarLavado(int posicion) {
	List<Lavado^>^ listaLavado = buscarAllLavado();
	for (int i = 0; i < listaLavado->Count; i++) {
		if (listaLavado[i]->posicion == posicion) {
			listaLavado->RemoveAt(i);
			break;
		}
	}
	escribirArchivoLavado(listaLavado);
}

void ServicioController::escribirArchivoLavado(List<Lavado^>^ listaLavado) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLavado->Count);
	for (int i = 0; i < listaLavado->Count; i++) {
		Lavado^ objLavado = listaLavado[i];
		lineasArchivo[i] = objLavado->posicion + ";" + objLavado->material + ";" + objLavado->duracion + ";" + objLavado->horaInicio + ";" + objLavado->estado;
	}
	File::WriteAllLines("lavado.txt", lineasArchivo);
}
void ServicioController::agregarLavado(int posicion, String^ material, int duracion, String^ horaInicio, String^ estado) {
	List<Lavado^>^ listaLavado = buscarAllLavado();
	Lavado^ objLavado = gcnew Lavado(posicion, material, duracion, horaInicio, estado);
	listaLavado->Add(objLavado);
	escribirArchivoLavado(listaLavado);
}
#include "SucursalController.h"

using namespace System::IO; // para trabajar con archivos controller
using namespace LPOOCarwashController;

SucursalController::SucursalController() {

}

List<Sucursal^>^ SucursalController::buscarSucursal(String^ distrito) {
	List<Sucursal^>^ listaSucursalEncontrados = gcnew List<Sucursal^>();
	array<String^>^ lineas = File::ReadAllLines("sucursal.txt");
	String^ separadores = ";";
	for each (String ^ lineaSucursal in lineas) {
		array<String^>^ datos = lineaSucursal->Split(separadores->ToCharArray());
		String^ distritoSucursal = datos[0];
		String^ direccionSucursal = datos[1];
		int aforoSucursal = Convert::ToInt32(datos[2]);
		int ingresosSucursal = Convert::ToInt32(datos[3]);
		if (distritoSucursal->Contains(distrito)) {
			Sucursal^ objSucursal = gcnew Sucursal(distritoSucursal, direccionSucursal, aforoSucursal, ingresosSucursal);
			listaSucursalEncontrados->Add(objSucursal);
		}
	}
	return listaSucursalEncontrados;
}

List<Sucursal^>^ SucursalController::buscarAll() {
	List<Sucursal^>^ listaSucursalEncontrados = gcnew List<Sucursal^>();
	array<String^>^ lineas = File::ReadAllLines("sucursal.txt");
	String^ separadores = ";";
	for each (String ^ lineaSucursal in lineas) {
		array<String^>^ datos = lineaSucursal->Split(separadores->ToCharArray());
		String^ distritoSucursal = datos[0];
		String^ direccionSucursal = datos[1];
		int aforoSucursal = Convert::ToInt32(datos[2]);
		int ingresosSucursal = Convert::ToInt32(datos[3]);
		Sucursal^ objSucursal = gcnew Sucursal(distritoSucursal, direccionSucursal, aforoSucursal, ingresosSucursal);
		listaSucursalEncontrados->Add(objSucursal);
	}
	return listaSucursalEncontrados;
}

void SucursalController::eliminarSucursal(String^ distrito) {
	List<Sucursal^>^ listaSucursal = buscarAll();
	for (int i = 0; i < listaSucursal->Count; i++) {
		if (listaSucursal[i]->distrito == distrito) {
			listaSucursal->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaSucursal);
}

void SucursalController::escribirArchivo(List<Sucursal^>^ listaSucursal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaSucursal->Count);
	for (int i = 0; i < listaSucursal->Count; i++) {
		Sucursal^ objSucursal = listaSucursal[i];
		lineasArchivo[i] = objSucursal->distrito + ";" + objSucursal->direccion + ";" + objSucursal->aforo + ";" + objSucursal->ingresos;
	}
	File::WriteAllLines("sucursal.txt", lineasArchivo);
}

void SucursalController::agregarSucursal(String^ distrito, String^ direccion, int aforo, int ingresos) {
	List<Sucursal^>^ listaSucursal = buscarAll();
	Sucursal^ objSucursal = gcnew Sucursal(distrito, direccion, aforo, ingresos);
	listaSucursal->Add(objSucursal);
	escribirArchivo(listaSucursal);
}

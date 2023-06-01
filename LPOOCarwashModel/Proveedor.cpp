#include "Proveedor.h"

using namespace LPOOCarwashModel;

Proveedor::Proveedor() {

}
Proveedor::Proveedor(String^ nombre, String^ producto, double costoEnvio, int celular, String^ asesor) {
	this->nombre = nombre;
	this->producto = producto;
	this->costoEnvio = costoEnvio;
	this->celular = celular;
	this->asesor = asesor;
}
#include "Sucursal.h"

using namespace LPOOCarwashModel;

Sucursal::Sucursal() {

}
Sucursal::Sucursal(String^ distrito, String^ direccion, int aforo, double ingresos) {
	this->distrito = distrito;
	this->direccion = direccion;
	this->aforo = aforo;
	this->ingresos = ingresos;
}
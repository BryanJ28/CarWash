#include "MedioPago.h"

using namespace LPOOCarwashModel;

MedioPago::MedioPago() {

}
MedioPago::MedioPago(double montoPago, int fecha, String^ tipo, double comision) {
	this->montoPago = montoPago;
	this->fecha = fecha;
	this->tipo = tipo;
	this->comision = comision;
}
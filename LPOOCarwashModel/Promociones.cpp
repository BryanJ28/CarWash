#include "Promociones.h"

using namespace LPOOCarwashModel;

Promociones::Promociones() {

}
Promociones::Promociones(int fechaInicio, int fechaFin, double descuento, String^ condiciones) {
	this->fechaInicio = fechaInicio;
	this->fechaFin = fechaFin;
	this->descuento = descuento;
	this->condiciones = condiciones;
}
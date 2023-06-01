#include "Reclamo.h"

using namespace LPOOCarwashModel;

Reclamo::Reclamo() {

}
Reclamo::Reclamo(int fecha, String^ descripcion, int estado) {
	this->fecha = fecha;
	this->descripcion = descripcion;
	this->estado = estado;
}
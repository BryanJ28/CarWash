#include "Incidente.h"

using namespace LPOOCarwashModel;

Incidente::Incidente() {

}
Incidente::Incidente(int fecha, String^ descripcion, String^ responsable, String^ afectado) {
	this->fecha = fecha;
	this->descripcion = descripcion;
	this->responsable = responsable;
	this->afectado = afectado;
}


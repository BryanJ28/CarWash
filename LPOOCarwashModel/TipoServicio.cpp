#include "TipoServicio.h"

using namespace LPOOCarwashModel;

TipoServicio::TipoServicio() {

}
TipoServicio::TipoServicio(double precio, String^ nombre, int prioridad, int duracion) {
	this->precio = precio;
	this->nombre = nombre;
	this->prioridad = prioridad;
	this->duracion = duracion;
}
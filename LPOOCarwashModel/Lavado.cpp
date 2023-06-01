#include "Lavado.h"

using namespace LPOOCarwashModel;

Lavado::Lavado() {

}
Lavado::Lavado(int posicion, String^ material, int duracion, String^ horaInicio, String^ estado) {
	this->posicion = posicion;
	this->material = material;
	this->duracion = duracion;
	this->horaInicio = horaInicio;
	this->estado = estado;
}
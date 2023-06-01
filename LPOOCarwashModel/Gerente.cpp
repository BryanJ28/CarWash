#include "Gerente.h"

using namespace LPOOCarwashModel;
Gerente::Gerente() {

}
Gerente::Gerente(String^ nombre, String^ apellido, double sueldo, int identificacion) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->sueldo = sueldo;
	this->identificacion = identificacion;
}
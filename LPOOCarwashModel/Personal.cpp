#include "Personal.h"

using namespace LPOOCarwashModel;
Personal::Personal() {

}
Personal::Personal(String^ nombre, String^ apellido, double sueldo, int identificacion) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->sueldo = sueldo;
	this->identificacion = identificacion;
}
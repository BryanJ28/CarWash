#include "Cliente.h"

using namespace LPOOCarwashModel;

Cliente::Cliente() {

}
Cliente::Cliente(String^ nombre, String^ apellido, int identificacion, int edad, int celular, String^ sexo) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->identificacion = identificacion;
	this->edad = edad;
	this->celular = celular;
	this->sexo = sexo;
}
#include "MaterialLimpieza.h"

using namespace LPOOCarwashModel;

MaterialLimpieza::MaterialLimpieza() {

}
MaterialLimpieza::MaterialLimpieza(String^ nombre, String^ marca, double cantAplicacion) {
	this->nombre = nombre;
	this->marca = marca;
	this->cantAplicacion = cantAplicacion;

}
#include "Inventario.h"

using namespace LPOOCarwashModel;

Inventario::Inventario() {

}
Inventario::Inventario(String^ nombreProducto, String^ precio, int numUnidades) {
	this->nombreProducto = nombreProducto;
	this->precio = precio;
	this->numUnidades = numUnidades;
}
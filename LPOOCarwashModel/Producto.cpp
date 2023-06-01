#include "Producto.h"

using namespace LPOOCarwashModel;

Producto::Producto() {

}
Producto::Producto(String^ nombreProducto, int precio, int numeroUnidades) {
	this->nombreProducto = nombreProducto;
	this->precio = precio;
	this->numeroUnidades = numeroUnidades;
}
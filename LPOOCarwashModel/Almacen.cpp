#include "Almacen.h"

using namespace LPOOCarwashModel;

Almacen::Almacen(){
}
Almacen::Almacen(int espaciosLibres, int capacidadMaxima) {
	this->espaciosLibres = espaciosLibres;
	this->capacidadMaxima = capacidadMaxima;
}
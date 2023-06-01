#include "Vehiculo.h"

using namespace LPOOCarwashModel;

Vehiculo::Vehiculo() {

}
Vehiculo::Vehiculo(String^ marca, String^ color, String^ modelo, String^ placa, String^ estado, double tonelaje) {
	this->marca = marca;
	this->color = color;
	this->modelo = modelo;
	this->placa = placa;
	this->estado = estado;
	this->tonelaje = tonelaje;
}
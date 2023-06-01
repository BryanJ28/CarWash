#include "Tarifario.h"

using namespace LPOOCarwashModel;

Tarifario::Tarifario() {

}
Tarifario::Tarifario(int codigo, double costo, String^ concepto) {
	this->codigo = codigo;
	this->costo = costo;
	this->concepto = concepto;
}
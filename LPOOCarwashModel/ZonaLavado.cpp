#include "ZonaLavado.h"

using namespace LPOOCarwashModel;

ZonaLavado::ZonaLavado() {

}
ZonaLavado::ZonaLavado(int codigo, int area, int estado) {
	this->codigo = codigo;
	this->area = area;
	this->estado = estado;
}
#include "TiendaAlmacen.h"

using namespace LPOOCarwashModel;

TiendaAlmacen::TiendaAlmacen() {

}
TiendaAlmacen::TiendaAlmacen(String^ ubicacion, int horario) {
	this->ubicacion = ubicacion;
	this->horario = horario;
}
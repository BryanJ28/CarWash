#include "TipoPersonal.h"

using namespace LPOOCarwashModel;
TipoPersonal::TipoPersonal() {

}
TipoPersonal::TipoPersonal(String^ cargo, int turno) {
	this->cargo = cargo;
	this->turno = turno;
}
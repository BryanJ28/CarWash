#include "Horario.h"

using namespace LPOOCarwashModel;

Horario::Horario() {

}
Horario::Horario(int fecha, int turno, int horaInicio, int horaFin) {
	this->fecha = fecha;
	this->turno = turno;
	this->horaInicio = horaInicio;
	this->horaFin = horaFin;
}
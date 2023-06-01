#include "Servicio.h"

using namespace LPOOCarwashModel;

Servicio::Servicio() {

}

Servicio::Servicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->identificacion = identificacion;
    this->placaCarro = placaCarro;
    this->colorCarro = colorCarro;
    this->tipoServicio = tipoServicio;
}
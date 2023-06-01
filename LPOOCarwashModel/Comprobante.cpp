#include "Comprobante.h"

using namespace LPOOCarwashModel;

Comprobante::Comprobante() {

}

Comprobante::Comprobante(int codigo, String^ fecha, String^ hora, int codigoProducto, int codigoMedioPago, double pago, double vuelto) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->hora = hora;
	this->codigoProducto = codigoProducto;
	this->codigoMedioPago = codigoMedioPago;
	this->pago = pago;
	this->vuelto = vuelto;
} 
#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class Comprobante {
		private:
			int codigo;
			String^ fecha;
			String^ hora;
			int codigoProducto;
			int codigoMedioPago;
			double pago;
			double vuelto;

		public:
			Comprobante();
			Comprobante(int codigo, String^ fecha, String^ hora, int codigoProducto, int codigoMedioPago, double pago, double vuelto);
	};
}
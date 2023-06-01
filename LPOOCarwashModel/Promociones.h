#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class Promociones {
		private:
			int fechaInicio;//DDMMAA
			int fechaFin;
			double descuento;
			String^ condiciones;
		public:
			Promociones();
			Promociones(int fechaInicio,int fechaFin, double descuento, String^condiciones);
	};
}
#pragma once

using namespace System;

namespace LPOOCarwashModel {
	
	public ref class MaterialLimpieza {
		private:
			String^ nombre;
			String^ marca;
			double cantAplicacion; //estandar de la empresa
		public:
			MaterialLimpieza();
			MaterialLimpieza(String^nombre, String^marca, double cantAplicacion);

	};

}
#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class ZonaLavado{
		public:
			int codigo;
			int area;
			int estado; //(0)libre (1) ocupado (2) fuera de servicio
		private:
			ZonaLavado();
			ZonaLavado(int codigo, int area, int estado);
	};
}

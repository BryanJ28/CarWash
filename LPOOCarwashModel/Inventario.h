#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Inventario {
		private:
			String^ nombreProducto;
			String^ precio;//double
			int numUnidades;

		public:
			Inventario();
			Inventario(String^ nombreProducto, String^precio, int numUnidades);
	};
}
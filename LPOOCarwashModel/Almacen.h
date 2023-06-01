#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Almacen {
		public:
			int espaciosLibres;
			int capacidadMaxima;
		private:
			Almacen();
			Almacen(int espaciosLibres, int capacidadMaxima);
	};
}
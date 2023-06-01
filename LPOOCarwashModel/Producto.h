#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class Producto {
	private:
		String^ nombreProducto;
		int precio;
		int numeroUnidades;
	public:
		Producto();
		Producto(String^ nombreProducto, int precio, int numeroUnidades);
	};
}
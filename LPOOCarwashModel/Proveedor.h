#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Proveedor {
		public:
			String^ nombre; //Nombre del proveedor
			String^ producto; //Producto el cual ofrece
			double costoEnvio; //Costo del envio del producto
			int celular; //Número de contacto
			String^ asesor;
		private:
			Proveedor();
			Proveedor(String^ nombre, String^ producto, double costoEnvio, int celular, String^ asesor);
	};
}
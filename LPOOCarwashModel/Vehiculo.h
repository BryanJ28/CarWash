#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class Vehiculo {
		private:
			String^ marca; //Marca del fabricante del auto
			String^ color; //Color del auto
			String^ modelo; //Modelo especifico del auto
			String^ placa; //Placa del vehiculo
			String^ estado; //Estado especifico de cómo entra el vehículo al lavado. (buen estado, con luna rota, con rayones, etc)
			double tonelaje; //Peso del auto en toneladas
		public:
			Vehiculo();
			Vehiculo(String^ marca, String^ color, String^ modelo, String^ placa, String^ estado, double tonelaje);
	};
}
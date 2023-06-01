#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Lavado {
		public:
			int posicion;
			String^ material;
			int duracion;//entero en minutos
			String^ horaInicio;
			String^ estado;
		public:
			Lavado();
			Lavado(int posicion, String^ material, int duracion, String^horaInicio, String^ estado);
	};

}

#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class TipoServicio {
		private:
			double precio; //Precio del tipo de servicio
			String^ nombre; //Nombre del tipo de servicio
			int prioridad; //Creciente del 1 al 3
			int duracion; //Duracion aproximada en minutos del tipo de servicio
		public:
			TipoServicio();
			TipoServicio(double precio, String^ nombre, int prioridad, int duracion);

	};
}
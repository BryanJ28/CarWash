#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Horario {
		private:
			int fecha;
			int turno; //(0)mañana (1)tarde (2)noche
			int horaInicio; //de dos en dos (HHMMSS)
			int horaFin; 
		public:
			Horario();
			Horario(int fecha, int turno, int horaInicio, int horaFin);
	};
}
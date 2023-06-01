#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class HorarioSucursal {
	private:
		int horaApertura; //Hora en la cual abre el lavado (HHMMSS)
		int horaCierre; //Hora de cierre del lavado (HHMMSS)
	public:
		HorarioSucursal();
		HorarioSucursal(int horaApertura, int horaCierre);
	};
}
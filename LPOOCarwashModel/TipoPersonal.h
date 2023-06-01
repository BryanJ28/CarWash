#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class TipoPersonal {
	private:
		String^ cargo; //Cargo del personal
		int turno; //Turno (1:TurnoMañana, 2:TurnoTarde)
	public:
		TipoPersonal();
		TipoPersonal(String^ cargo, int turno);
	};
}
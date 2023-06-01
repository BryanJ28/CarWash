#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class TiendaAlmacen {
	private:
		String^ ubicacion;
		int horario;
	public:
		TiendaAlmacen();
		TiendaAlmacen(String^ ubicacion, int horario);
	};
}
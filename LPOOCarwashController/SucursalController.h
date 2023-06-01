#pragma once

namespace LPOOCarwashController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace LPOOCarwashModel;

	public ref class SucursalController {
	public:
		SucursalController();
		List<Sucursal^>^ buscarSucursal(String^ distrito);
		List<Sucursal^>^ buscarAll();
		void eliminarSucursal(String^ distrito);
		void escribirArchivo(List<Sucursal^>^ listaSucursal);
		void agregarSucursal(String^ distrito, String^ direccion, int aforo, int ingresos);
	};
}
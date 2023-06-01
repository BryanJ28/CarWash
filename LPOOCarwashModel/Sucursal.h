#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Sucursal {
		public:
			String^ distrito;
			String^ direccion;
			int aforo;
			double ingresos;
		public:
			Sucursal();
			Sucursal(String^direccion, String^distrito, int aforo, double ingresos);
	};
}
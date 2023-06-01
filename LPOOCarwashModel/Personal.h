#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Personal {
		public:
			String^ nombre;
			String^ apellido;
			double sueldo;
			int identificacion;
		public:
			Personal();
			Personal(String^nombre,String^apellido, double sueldo, int identificacion);
	};
}
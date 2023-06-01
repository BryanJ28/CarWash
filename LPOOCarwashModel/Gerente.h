#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Gerente {
	public:
		String^ nombre;
		String^ apellido;
		double sueldo;
		int identificacion;
	public:
		Gerente();
		Gerente(String^ nombre, String^ apellido, double sueldo, int identificacion);
	};
}
#pragma once

using namespace System;

namespace LPOOCarwashModel {
	
	public ref class Cliente {
		public:
			String^ nombre; //Nombre del cliente
			String^ apellido;
			int identificacion; //DNI o canet de extranjeria
			int edad; //Edad del cliente
			int celular; //Número de celular para contactar de ser necesario
			String^ sexo; //
	
		public:
			Cliente();
			Cliente(String^ nombre, String^ apellido,  int identificacion, int edad, int celular, String^ sexo);

	};
}
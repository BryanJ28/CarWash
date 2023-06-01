#pragma once
namespace LPOOCarwashController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace LPOOCarwashModel;

	public ref class gerenteController {
	public:
		gerenteController();
		List<Gerente^>^ buscarGerente(String^ nombre, String^ apellido);
		List<Gerente^>^ buscarAll();
		void eliminarGerente(int identificacion);
		void escribirArchivo(List<Gerente^>^ listaGerente);
		Gerente^ buscarGerentexIdentificacion(int identificacion);
		void actualizarGerente(Gerente^ objGerente);
		void agregarGerente(String^ nombre, String^ apellido, Double sueldo, int identificacion);
		int buscarUsuarioEnGerente(String^ nombre, String^ apellido, String^ identificacion);
	};
}
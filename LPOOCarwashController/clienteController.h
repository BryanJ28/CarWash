#pragma once
namespace LPOOCarwashController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace LPOOCarwashModel;

	public ref class clienteController {
	public:
		clienteController();
		List<Cliente^>^ buscarCliente(String^ nombre, String^ apellido, String^ identificacion);
		List<Cliente^>^ buscarAll();
		void eliminarCliente(int identificacion);
		void escribirArchivoCliente(List<Cliente^>^ listaCliente);
		void agregarCliente(String^ nombre, String^ apellido, int identificacion, int edad, int celular, String^ sexo);
		int buscarUsuarioEnCliente(String^ nombre, String^ apellido, String^ identificacion);
		Cliente^ buscarClientexIdentificacion(int identificacion);

		/*Cliente^ buscarClientexIdentificacion(int identificacion);
		void actualizarCliente(Cliente^ objCliente);
		void agregarCliente(String^ nombre, String^ apellido,int identificacion, String^ servicio);*/
	};
}
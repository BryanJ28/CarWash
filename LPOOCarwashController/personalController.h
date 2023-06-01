#pragma once

namespace LPOOCarwashController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace LPOOCarwashModel;

	public ref class personalController {
	public:
		personalController();
		List<Personal^>^ buscarPersonal(String^ nombre, String^ apellido);
		List<Personal^>^  buscarAll();
		void eliminarPersonal(int identificacion);
		void escribirArchivo(List<Personal^>^ listaPersonal);
		Personal^ buscarPersonalxIdentificacion(int identificacion);
		void actualizarPersonal(Personal^ objPersonal);
		void agregarPersonal(String^ nombre, String^ apellido, Double sueldo, int identificacion);
		int buscarUsuarioEnPersonal(String^ nombre, String^ apellido, String^ identificacion);
	};
}
#pragma once

namespace LPOOCarwashController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace LPOOCarwashModel;

	public ref class ServicioController {
	public:
		ServicioController();
		List<Servicio^>^ buscarServicio(String^ nombre, String^ apellido);
		List<Servicio^>^ buscarAll();
		void eliminarServicio(int identificacion);
		void escribirArchivo(List<Servicio^>^ listaServicio);
		Servicio^ buscarServicioxIdentificacion(int identificacion);
		void actualizarServicio(Servicio^ objServicio);
		void agregarServicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio);
		int buscarUsuarioEnServicio(String^ nombre, String^ apellido, String^ identificacion);
		void pedirServicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio);
		List<Lavado^>^ buscarLavado(int posicion);
		int VerificarEstado(int posicionButton);
		void eliminarLavado(int posicion);
		List<Lavado^>^ buscarAllLavado();
		void escribirArchivoLavado(List<Lavado^>^ listaLavado);
		void agregarLavado(int posicion, String^ material, int duracion, String^ horaInicio, String^ estado);
	};
}
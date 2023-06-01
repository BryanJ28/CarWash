#pragma once

using namespace System;

namespace LPOOCarwashModel {

	public ref class Reclamo {

		private:
			int fecha; //DDMMAA
			String^ descripcion;
			int estado; //(0) recibida (1)en trámite (2) finalizada
		public:
			Reclamo();
			Reclamo(int fecha, String^descripcion, int estado);
	};
}
#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class Incidente {
		private:
			int fecha;//de dos cigras en dos cifras (DDMMAA)
			String^ descripcion;
			String^ responsable;
			String^ afectado;
		public:
			Incidente();
			Incidente(int fecha, String^ descripcion, String^ responsable, String^ afectado);
	};
}
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace LPOOCarwashModel {

	public ref class Tarifario {
		private:
			int codigo; //Código de la tarifa
			double costo; //Costo total
			String^ concepto;
		public:
			Tarifario();
			Tarifario(int codigo, double costo, String^ concepto);

	};
}
#pragma once

using namespace System;

namespace LPOOCarwashModel {
	public ref class MedioPago {
		private:
			double montoPago;
			int fecha; //(DDMMAA)
			String^ tipo;
			double comision;
		public:
			MedioPago();
			MedioPago(double montoPago, int fecha, String^ tipo, double comision);
	};
}
#pragma once
using namespace System;

namespace LPOOCarwashModel {
    public ref class Servicio {
    public:
        String^ nombre;
        String^ apellido;
        int identificacion;
        String^ placaCarro;
        String^ colorCarro;
        String^ tipoServicio;

        Servicio(); // constructor vac�o
        Servicio(String^ nombre, String^ apellido, int identificacion, String^ placaCarro, String^ colorCarro, String^ tipoServicio);
    };
}
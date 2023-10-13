//#ifndef FECHA_H
//#define FECHA_H
#pragma once


#include <iostream>

#include <string.h>

class Fecha{
    private:
        int _dia,_mes,_anio;



    public:
        void AgregarDia();
        void RestarDia();
        Fecha();
        Fecha(int dia,int mes,int anio);

        void AgregarDias(int dias);
        std::string toString(Fecha fecha);

        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);

        int getDia();
        int getMes();
        int getAnio();

        void cargar();
        void mostrar();
};

//#endif // FECHA_H

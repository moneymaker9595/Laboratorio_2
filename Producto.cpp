#include <string>
#include "Producto.h"
#include "Fecha.h"

void Producto::setFechaAlta(int dia, int mes, int anio){

        _fechaAlta.setDia(dia);
        _fechaAlta.setMes(mes);
        _fechaAlta.setAnio(anio);


}


void Producto::set_id(std::string id) {
        _id = id;
    }

    void Producto::set_precio(float precio) {
        _precio = precio;
    }

    void Producto:: set_proveedor(std::string proveedor) {
        _proveedor = proveedor;
    }

    void Producto::set_estado(bool estado){
    _estado=estado;
    }

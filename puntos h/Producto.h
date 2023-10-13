#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <string>

#include "Fecha.h"
//en caso de estar trabajando en vs recordar agregar el pragma once y borrar lo default de codebloks
class Producto{

private:

    std::string _id;
    float _precio;
    std::string _proveedor;
    Fecha _fechaAlta;
    std::string _descripcion;
    bool _estado;

public:
    void set_id(std::string id);
    void set_precio(float precio);
    void set_proveedor(std::string provedor);

    void setFechaAlta(int dia, int mes, int anio);
    void set_estado( bool estado);
    };

#endif // PRODUCTO_H

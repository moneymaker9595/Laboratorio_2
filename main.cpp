#include<iostream>
#include<cstring>
#include <cstdlib>

using namespace std;

int main (){


string id,contrasena;


    while(true){

cout<<"**Bienvenido al menu de ventas**"<<endl;

cout<<endl;
cout<<"Ingrese usuario: "<<endl;
cin>>id;
cout<<"Ingrese clave: "<<endl;
cin>>contrasena;




system("cls");



if(id=="admin"&&contrasena=="admin"){

        int opcion;
    cout<<endl;
    cout<<"Bienvenido admin "<<endl;
    cout<<endl;
    cout<<"Indique la accion a realizar: "<<endl;
    cout<<endl;

    cout<<"1-MODIFICAR PRODUCTO"<<endl;
    cout<<"2-LISTAR PRODUCTOS"<<endl;
    cout<<"3-DAR DE BAJA UN PRODUCTO"<<endl;
    cout<<"4-DAR DE BAJA UN VENDEDOR"<<endl;
    cout<<"5-DAR DE ALTA UN VENDEDOR"<<endl;
    cout<<"6-VER IMPORTE RECAUDADO"<<endl;
    cout<<"7-VER IMPORTE RECAUDADO POR VENDEDOR"<<endl;
    cout<<"8-DAR DE ALTA UN PRODUCTO"<<endl;
    cout<<"9-LISTAR VENDEDORES"<<endl;
    cout<<"10-BUSCAR VENDEDOR"<<endl;
    cout<<"0-SALIR"<<endl;
    cin>>opcion;
    system("cls");

}
else{
    cout<<"Contraseña invalida "<<endl;

 system("pause");
    return -1;
}

    }
 system("pause");


return 0;}

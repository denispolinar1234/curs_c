/*
 
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Producto
{
private:
    string id_producto;
    string nombre;
    int cantidad;
    string categoria;
    string fecha_registro;

public:
    Producto(int _id_producto = 0, string _nombre = " ", int _cantidad = 0, string _categoria = " ", string _fecha_registro = " ")
    {
        id_producto = id_producto;
        nombre = _nombre;
        cantidad = _cantidad;
        categoria = _categoria;
        fecha_registro = _fecha_registro;
    }

    string getIdProducto()
    {
        return id_producto;
    }

    string getNombreProducto()
    {
        return nombre;
    }

    int getCantidad()
    {
        return cantidad;
    }

    string getCategoria()
    {
        return categoria;
    }

    void setCantidad(int cantidad_)
    {
        cantidad = cantidad_;
    }

    string getFecha_registro()
    {
        return fecha_registro;
    }

    void imprimirProducto()
    {
        cout << "ID: " << id_producto << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Categoría: " << categoria << endl;
        cout << "Fecha de registro: " << fecha_registro << endl;
    }
    void getDatos(){
        cout<<"Id producto: "<<id_producto<<"Nombre: "<<nombre<<endl;
    }

    
};

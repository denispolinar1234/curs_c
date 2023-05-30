#include <iostream>
#include <string>
#include <map>
#include "producto.cpp"

using namespace std;
class Moto : public Producto
{
private:
    string marca;

public:
    Moto(int _id_producto = 0, string _nombre = " ", int _cantidad = 0, string _categoria = " ", string _marca = " ") : Producto(_id_producto = 0, _nombre = " ", _cantidad = 0, _categoria = " ")
    {
        marca = _marca;
    }
    /*
    string getId(){
        string ID="Id producto: "+to_string(id_producto);
    }
   */
};
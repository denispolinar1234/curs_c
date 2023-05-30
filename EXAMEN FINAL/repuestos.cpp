#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Repuestos
{
private:
    string nombre_repuesto;
    string modelo;
    int precio;
    int numero;

public:
    Repuestos(string _nombre_repuestos = " ", string _modelo = " ",int precio=0,int _numero=0)
    {
        nombre_repuesto = _nombre_repuestos;
        modelo = _modelo;
        numero=_numero;
    }

    string getNombreRepuestos()
    {
        return nombre_repuesto;
    }

    string getModelo(){
        return modelo;
    }

    int getPrecio(){
        return precio;
    }
    int getNumRepuestos(){
        return numero;
    }
     
};
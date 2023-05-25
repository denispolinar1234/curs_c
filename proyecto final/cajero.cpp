#include <string>
#include "cliente.cpp"

using namespace std;

class Cajero : public Persona
{
protected:
    string c_codigo, c_contrasena;

public:
    // Constructor
    Cajero(string _c_codigo = "", string _c_contrasena = "", string _apellido= "", string _nombre= "" , 
    string _direccion= "", string _telefono= "", string _DNI= "") : Persona(_nombre, _apellido, _direccion, _telefono, _DNI)
    {
        c_codigo = _c_codigo;
        c_contrasena = _c_contrasena;
    }

    // Metodos
    string getDatos()
    {
        return "Datos del cajero: \n " + getApellido() + " " + getNombre();
    }

    string getCodigo()
    {
        return c_codigo;
    }

    string getContrasena()
    {
        return c_contrasena;
    }
};
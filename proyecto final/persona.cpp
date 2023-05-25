#include <string>

using namespace std;

class Persona
{
protected:
    string nombre, apellido, direccion, telefono, DNI;

public:
    Persona(string _nombre, string _apellido, string _direccion, string _telefono, string _DNI)
    {
        nombre = _nombre;
        apellido = _apellido;
        direccion = _direccion;
        telefono = _telefono;
        DNI = _DNI;
    }

    // Getters
    string getNombre(){
        return nombre;
    }

    string getApellido(){
        return apellido;
    }

    string getDireccion(){
        return direccion;
    }

    string getTelefono(){
        return telefono;
    }

    string getDNI(){
        return DNI;
    }

    // Setters
    void setNombre(string _nombre){
        nombre = _nombre;
    }

    void setApellido(string _apellido){
        apellido = _apellido;
    }

    void setDireccion(string _direccion){
        direccion = _direccion;
    }

    void setTelefono(string _telefono){
        telefono = _telefono;
    }

    void setDNI(string _DNI){
        DNI = _DNI;
    }
};
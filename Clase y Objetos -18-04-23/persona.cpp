#include<iostream>

using namespace std;

class Persona{
private:
    string apellidos;
    string nombres;
    string direccion;
    string fecha_nacimiento;
    string dni;

public:
    //constructor
    Persona(string _apellidos,string _nombres, string _direccion,string _fecha_nacimiento,string _dni){
        apellidos=_apellidos;
        nombres=_nombres;
        direccion=_direccion;
        fecha_nacimiento=_fecha_nacimiento;
        dni=_dni;
    }

    //metodos modificadores

    string getApellidos(){
        return apellidos;
    }

    string getNombres(){
        return nombres;
    }

    string getDireccion(){
        return direccion;
    }

    string getFecha_nacimiento(){
        return fecha_nacimiento;
    }

    string getDni(){
        return dni;
    }

    void setApellidos(string _apellidos_){
        apellidos=_apellidos_;
    }

     void setNombres(string _nombres_){
        nombres=_nombres_;
    }

     void setDireccion(string _direccion_){
        direccion=_direccion_;
    }

     void setFecha_nacimiento(string fech_nacimiento){
        fecha_nacimiento=fech_nacimiento;
    }

     void setDni(string _dni_){
        dni=_dni_;
    }

   
};
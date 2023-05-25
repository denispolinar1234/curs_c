/*
implemente una clase empleado que herede de persona, los atributos 
de empleado son puesto, sueldo y antiguedad.
cree una clase departamento con los atributos de nombre y siglas que contenga 
un arreglo de 10 empleados registrados
imprima un reporte de departamento y sus empleados en txt
*/
#include<iostream>

using namespace std;

class Persona{
    private:
    string nombres;
    string apellidos;
    public:
    //constructor
    Persona(string _nombres,string _apellidos){
        nombres=_nombres;
        apellidos=_apellidos;
    }
    //getter and setter
    string getNombres(){
        return nombres;
    }

    string getApellidos(){
        return apellidos;
    }

    void setNombres(string nombres_){
        nombres=nombres_;
    }

    void setApellidos(string apellidos_){
        apellidos=apellidos_;
    }

    
};


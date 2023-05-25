#include<iostream>
#include<string>
#include "departamento.cpp"
#include "persona.cpp"

using namespace std;

class Empleado :Persona{
    string puesto;
    int sueldo;
    int antiguedad;
    Departamento departamento;
    public:
    //constructor

    Empleado(string _puesto,int _sueldo,int _antiguedad,string _nombres,string _apellidos,string _dni,string _fecha_nacimiento,string _edad):Persona( _nombres, _apellidos, _dni, _fecha_nacimiento,_edad){
        puesto=_puesto;
        sueldo=_sueldo;
        antiguedad=_antiguedad;
    }

    string getPuesto(){
        return puesto;
    }

    int getSueldo(){
        return sueldo;
    }

    int getAntiguedad(){
        return antiguedad;
    }

    void setPuesto(string puesto_){
        puesto=puesto_;
    }

    void setSueldo(int sueldo_){
        sueldo=sueldo_;
    }

    void setAntiguedad(int antiguedad_){
        antiguedad=antiguedad_;

    }

    Departamento getDepartamento()
    {
        return departamento;
    }

    void setDepartamento(Departamento depa){
        departamento=depa;
    }

    void datoString(){
        cout<<puesto<<"\t"<<sueldo<<"\t"<<antiguedad<<"\t"<<getNombres()<<"\t"<<getApellidos()<<"\t"<<getDni()<<"\t"<<getFecha_nacimiento()<<"\t"<<getEdad();
    }

    
};



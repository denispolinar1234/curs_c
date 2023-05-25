#include<iostream>
using namespace std;

class Profesor{
    private:
    string nombres;
    string apellidos;
    string dni;
    string facultad;
    public:
    //connstructor
    Profesor(string _nombres,string _apellidos,string _dni,string _facultad){
        nombres=_nombres;
        apellidos=_apellidos;
        dni=_dni;
        facultad=_facultad;
    }

    //setter and getter

    string getNombres(){
        return nombres;
    }

    string getApellidos(){
        return apellidos;
    }

    string getDni(){
        return dni;
    }

    string getFacultad(){
        return facultad;
    }

    

    void setNombres(string nombres_){
        nombres=nombres_;
    }

    void setApelllidos(string apellidos_){
        apellidos=apellidos_;
    }

    void setDni(string dni_){
        dni=dni_;
    }

    void setfacultad(string facultad_){
        facultad=facultad_;
    }

    string getDataProfesor(){
        return "Nombres y Apellidos : " + nombres + " ," + apellidos + ", DNI : " + dni+" ,Facultad: "+facultad;
    }

};
#include<iostream>
#include<string>
#include<ctime>
#include "persona.cpp"

using namespace std;

class Estudiante : Persona{
private:
    string codigo_estudiante;
    string facultad;
    string correo;
    

public:
    //constructor
    Estudiante(string _codigo_estudiante,string _correo,string _apellidos,string _nombres, string _direccion,string _fecha_nacimiento,string _dni) : Persona (_apellidos,_nombres,_direccion,_fecha_nacimiento,_dni)
    {
        codigo_estudiante=_codigo_estudiante;
        //facultad=_facultad;
        correo=_correo;
       
    }

    //metodos modificadores

    string getCodigo_estudiante(){
        return codigo_estudiante;
    }

    string getFacultad(){
        return facultad;
    }

    string getorreo(){
        return correo;
    }

    

    void setCodigo_estudiante(string cod_estudiante){
        codigo_estudiante=cod_estudiante;
    }

    void setFacultad(string facult){
        facultad=facult;
    }

    void setCorreo(string correoo){
        correo=correoo;
    }

    void getDatos(){
        cout<<getApellidos()<<"\t"<<getNombres()<<"\t"<<getDireccion()<<"\t"<<getFecha_nacimiento()<<"\t"<<getDni()<<endl;
    }

    
};

#include<iostream>





using namespace std;

class Departamento{
    private:
    string nombre_depa;
    string siglas;
    
    public:
    //constructor
    Departamento(string _nombre_depa="",string _siglas=""){
        nombre_depa=_nombre_depa;
        siglas=_siglas;
    }

    string getNombre_depa(){
        return nombre_depa;
    }

    string getSiglas(){
        return siglas;
    }

    void setNombre_depa(string nombre_depa_){
        nombre_depa=nombre_depa_;
    }

    void setSiglas(string siglas_){
        siglas=siglas_;
    }

};


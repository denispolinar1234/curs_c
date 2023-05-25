#include<iostream>
#include "persona.cpp"

using namespace std;


class Empleado : public Persona{
    private:
    string puesto,antiguedad;
    int sueldo;

    public:
    Empleado(string _puesto=" ",string _antiguedad=" ",int _sueldo=0,string _nombres=" ",string _apellidos=" "):Persona (_nombres,_apellidos){
        puesto=_puesto;
        antiguedad=_antiguedad;
        sueldo=_sueldo;
    }
    //getter and setter
    string getPuesto() const {
        return puesto;
    }

    void setPuesto(const string& _puesto) {
        puesto = _puesto;
    }

    string getAntiguedad() const {
        return antiguedad;
    }

    void setAntiguedad(const string& _antiguedad) {
        antiguedad = _antiguedad;
    }

    int getSueldo() const {
        return sueldo;
    }

    void setSueldo(int _sueldo) {
        sueldo = _sueldo;
    }

    string listempleados(){
        return "Lista de empleados: ";
    }

    string getDatos(){
        string resumen="Nombres: "+getNombres()+"|| Apellidos: "+getApellidos()+"|| Puesto: "+puesto+"|| Antiguedad: "+antiguedad+"|| Sueldo: "+to_string(sueldo)+"\n";
        return resumen;
    }
   

    
};


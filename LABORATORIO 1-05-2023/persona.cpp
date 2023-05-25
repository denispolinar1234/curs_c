#include<iostream>

using namespace std;

class Persona{
    private:
    string nombres;
    string apellidos;
    string dni;
    string fecha_nacimiento;
    string edad;
    public:
    //connstructor
    Persona(string _nombres,string _apellidos,string _dni,string _fecha_nacimiento,string _edad){
        nombres=_nombres;
        apellidos=_apellidos;
        dni=_dni;
        fecha_nacimiento=_fecha_nacimiento;
        edad=_edad;
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

    string getFecha_nacimiento(){
        return fecha_nacimiento;
    }

    string getEdad(){
        return edad;
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

    void setFecha_nacimiento(string fecha_nacimiento_){
        fecha_nacimiento=fecha_nacimiento_;
    }

    void setEdad(string edad_){
        edad=edad_;
    }
    
};

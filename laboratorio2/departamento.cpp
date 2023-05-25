#include <iostream>
#include <string>
#include "empleado.cpp"
using namespace std;

class Departamento
{
private:
    string nombre, siglas;
    Empleado empleados[10];
    int numempleados;

public:
    Departamento(string _nombre, string _siglas){
        nombre=_nombre;
        siglas=_siglas;
        numempleados=0;
    }

    void agregarEmpleado(Empleado empleado)
    {
        if (numempleados<10)
        {
            empleados[numempleados] = empleado;
            numempleados++;
        }
        
    }

    void imprimirEmpleados()
    {
        cout << "Empleados del departamento:" <<endl;
        cout<<"\n";
        if (sizeof(empleados) / sizeof(empleados[0]) != 0)
        {
            for (int i = 0; i < 10; i++)
            {
                cout<<empleados[i].getDatos()<<endl;
                cout<<"*****************************************************************************"<<endl;
            }
        }
    }

    string getDatosdepartamento(){
        string datos="Departamento:"+nombre+" ----->||Siglas: "+siglas;
        return datos;
    }


};


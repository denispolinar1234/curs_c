#include<iostream>
#include<fstream>
#include "departamento.cpp"

using namespace std;

int main(){
    
    Departamento departamento("DEPARTAMENTO DE VENTAS", "DV");
    
    Empleado empleado1("Limpieza","5 años",2000.00,"Withman Angel","Ore Guzman");
    Empleado empleado2("Supervisor", "3 años", 4000, "Jane", "Smith");
    Empleado empleado3("Analista", "2 años", 3500, "David", "Johnson");
    Empleado empleado4("Asistente", "1 año", 2500, "Sarah", "Williams");
    Empleado empleado5("Desarrollador", "4 años", 4500, "Michael", "Brown");
    Empleado empleado6("Consultor", "6 años", 5500, "Jennifer", "Jones");
    Empleado empleado7("Ejecutivo", "7 años", 6000, "Robert", "Davis");
    Empleado empleado8("Técnico", "2 años", 3000, "Emily", "Taylor");
    Empleado empleado9("Coordinador", "3 años", 3800, "Daniel", "Anderson");
    Empleado empleado10("Ingeniero", "5 años", 4800, "Olivia", "Martinez");

    //arreglo de empleados
    Empleado empleados[10]={empleado1,empleado2,empleado3,empleado4,empleado5,empleado6,empleado7,empleado8,empleado9,empleado10};
    int tamaño=sizeof(empleados)/sizeof(empleados[0]);

    //for para agregar empleado a departamento

    for (int i = 0; i < tamaño; i++)
    {
        departamento.agregarEmpleado(empleados[i]);
    }
    

    //imprimir empleados
    cout<<departamento.getDatosdepartamento()<<endl;
    cout<<"*********************************************"<<endl;
    departamento.imprimirEmpleados();

    // declaramos
    ofstream archivo("empleados.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archivo << "*Datos del departamento y sus empleados* \n";
    archivo <<"------------------------------------------------------\n";
    archivo <<departamento.getDatosdepartamento()<<endl;
    archivo <<"------------------------------------------------------\n";
    archivo <<"Lista de empleados: \n";
    archivo <<"\n";
    for (int i = 0; i < 10; i++)
    {
        archivo <<empleados[i].getDatos() << "\n";
    }
    archivo.close();
    
    return 0;
}
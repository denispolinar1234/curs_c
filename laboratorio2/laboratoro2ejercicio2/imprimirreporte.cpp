/*#include<iostream>
#include<fstream>
#include "automoviles.cpp"
#include "motocicleta.cpp"


using namespace std;

class Reporte{
    public:
    // Funcion para el ingreso en la base de datos (TXT)
    void imprimir_reporte(Automoviles automoviles[10],Motocicleta motocicleta[5])
    {
        ofstream reporte;             // Variable ofstream
        reporte.open("registro.txt"); // Abrir el archivo txt
        reporte << "Compra registrada \n";
        for (int i = 0; i <10 ; i++)
        {
            reporte << automoviles[i].getDatos_automoviles() << "\n";
        }
        for (int i = 0; i < 5; i++)
        {
            reporte <<motocicleta[i].getDatos_motocicleta();
        }
        reporte.close();
        
    }


};
*/
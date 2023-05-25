#include <iostream>
#include<fstream>
#include "motocicleta.cpp"
#include "automoviles.cpp"

using namespace std;
int main()
{

    Vehiculo vehiculo1("c200", "4", "4", "4", "yes");
    // Crear objetos de la clase Motocicleta
    Motocicleta moto1("Rojo", "Honda", "250cc", "1", "2", "0", "Sí");
    Motocicleta moto2("Azul", "Yamaha", "150cc", "1", "2", "0", "No");
    Motocicleta moto3("Negro", "Suzuki", "500cc", "1", "2", "0", "Sí");
    Motocicleta moto4("Blanco", "Kawasaki", "300cc", "1", "2", "0", "No");
    Motocicleta moto5("Verde", "Ducati", "1000cc", "1", "2", "0", "Sí");

    // Crear objetos de la clase Automoviles
    Automoviles auto1("Rojo", "Toyota", "2000cc", "5", "4", "4", "Sí");
    Automoviles auto2("Azul", "Honda", "1500cc", "4", "4", "4", "Sí");
    Automoviles auto3("Blanco", "Ford", "1800cc", "5", "4", "4", "No");
    Automoviles auto4("Gris", "Chevrolet", "1600cc", "5", "4", "4", "Sí");
    Automoviles auto5("Negro", "Volkswagen", "1400cc", "5", "4", "4", "No");
    Automoviles auto6("Plateado", "BMW", "3000cc", "5", "4", "4", "Sí");
    Automoviles auto7("Verde", "Mercedes-Benz", "2500cc", "5", "4", "4", "No");
    Automoviles auto8("Amarillo", "Audi", "2200cc", "5", "4", "4", "Sí");
    Automoviles auto9("Naranja", "Mazda", "1900cc", "5", "4", "4", "No");
    Automoviles auto10("Morado", "Subaru", "2300cc", "5", "4", "4", "Sí");

    // arreglo de Motocicletas

    Motocicleta motocicletas[5] = {moto1, moto2, moto3, moto4, moto5};
    int tamañoMotocicleta = sizeof(motocicletas) / sizeof(motocicletas[0]);

    // arreglo para Automoviles

    Automoviles automoviles[10] = {auto1, auto2, auto3, auto4, auto5, auto6, auto7, auto8, auto9, auto10};
    int tamañoAutomoviles = sizeof(automoviles) / sizeof(automoviles[0]);

    // for para agregar automoviles

    for (int i = 0; i < tamañoAutomoviles; i++)
    {
        automoviles[i].getDatos_automoviles();
    }

    for (int i = 0; i < tamañoMotocicleta; i++)
    {
        motocicletas[i].getDatos_motocicleta();
    }
    ofstream reporte;             // Variable ofstream
    reporte.open("registro.txt"); // Abrir el archivo txt
    reporte << "Compra registrada \n";
    for (int i = 0; i < 10; i++)
    {
        reporte << automoviles[i].getDatos_automoviles() << "\n";
    }
    for (int i = 0; i < 5; i++)
    {
        reporte << motocicletas[i].getDatos_motocicleta();
    }
    reporte.close();

   

    return 0;
}
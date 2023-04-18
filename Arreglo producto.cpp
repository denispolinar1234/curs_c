// Declara 1 arreglo con el precio del producto=5
//  los precios som agregados por teclado
//  imprime el arreglo
//  imprime el valor maximo del arreglo
// imprime el valor maximo del indice del arreglo

#include <iostream>
using namespace std;

int main()
{

    int producto1;
    int producto2;
    int producto3;
    int producto4;
    int producto5;

    cout<< "Ingrese el precio de cada producto\n";
    cout<< "lapicero\n";
    cin>> producto1;
    cout<< "Desarrollo I\n";
    cin >> producto2;
    cout<< "-Fisica II\n";
    cin>> producto3;
    cout<< "-Matematica basica\n";
    cin>> producto4;
    cout<< "-Lenguaje\n";
    cin>> producto5;

    string productos[] = {"-lapicero", "-Desarrollo I", "-Fisica II", "-Matematica basica", "-Lenguaje"};
  for (int i = 0; i < 5; i++)
     {
        cout << "\n"<< "El valor del arreglo b es[" << i << "]";
     }

     int tamaño = sizeof(productos);
     cout << "\n"
          << "\n"
          << "el tamaño maximo es: "
          << tamaño;

     int tamaño2 = sizeof(productos) / sizeof(productos[0]);
     cout << "\n"
          << "\n"
          << "el valor maximo del indice es: "
          << tamaño2 << "\n";

     return 0;
}

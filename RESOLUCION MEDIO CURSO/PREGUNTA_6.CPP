//6. Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.
#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int max_palabras = 100; 
    string palabras[max_palabras]; 
    int n; // cantidad de palabras a leer

    cout << "Ingrese la cantidad de palabras a leer";
    cin >> n;
    //rrecore el arreglo para ingresar las palabras
    cout << "Ingrese las palabras: ";
    for (int i = 0; i < n; i++) {
        cin >> palabras[i];
    }

    sort(palabras, palabras + n); // ordena las palabras alfabéticamente
    //rrecore el arrelo para imprimir las palabras ordenadas alfabeticamente
    cout << "Las palabras ordenadas alfabéticamente son: ";
    for (int i = 0; i < n; i++) {
        cout << palabras[i] << " ";
    }
    cout << endl;

    return 0;
}
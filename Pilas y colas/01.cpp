#include <iostream>
#include <deque> // Incluimos la librería deque

using namespace std;

int main() {
    deque<int> pila; // Creamos una pila de enteros

    // Agregamos elementos a la pila
    pila.push_back(1);
    pila.push_back(2);
    pila.push_back(3);

    // Imprimimos la pila
    cout << "Pila actual: ";
    for (auto it = pila.rbegin(); it != pila.rend(); ++it) {
        cout << *it << " "; // Utilizamos un iterador reverso para recorrer la pila
    }
    cout << endl;

    // Eliminamos el elemento superior de la pila (el último elemento agregado)
    pila.pop_back();

    // Imprimimos la pila actualizada
    cout << "Pila actualizada: ";
    for (auto it = pila.rbegin(); it != pila.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    pila.pop_back();

    cout << "Pila actualizada 1: ";
    for (auto it = pila.rbegin(); it != pila.rend(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
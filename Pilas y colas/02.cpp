#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Tamaño máximo de la pila

class Pila {
private:
    int datos[MAX_SIZE]; // Arreglo que contiene los datos de la pila
    int tope; // Índice del último elemento agregado a la pila

public:
    // Constructor
    Pila() {
        tope = -1; // Inicializamos el tope en -1, indicando que la pila está vacía
    }

    // Método que verifica si la pila está vacía
    bool estaVacia() {
        return tope == -1;
    }

    // Método que verifica si la pila está llena
    bool estaLlena() {
        return tope == MAX_SIZE - 1;
    }

    // Método que agrega un elemento a la pila
    void push(int valor) {
        if (estaLlena()) {
            cout << "La pila está llena, no se puede agregar el valor " << valor << endl;
        } else {
            tope++; // Incrementamos el tope
            datos[tope] = valor; // Agregamos el valor al arreglo
        }
    }

    // Método que elimina el elemento superior de la pila y lo devuelve
    int pop() {
        if (estaVacia()) {
            cout << "La pila está vacía, no se puede eliminar ningún elemento" << endl;
            return -1;
        } else {
            int valor = datos[tope]; // Obtenemos el valor del elemento superior
            tope--; // Decrementamos el tope
            return valor; // Devolvemos el valor
        }
    }

    // Método que devuelve el elemento superior de la pila sin eliminarlo
    int top() {
        if (estaVacia()) {
            cout << "La pila está vacía, no hay ningún elemento superior" << endl;
            return -1;
        } else {
            return datos[tope]; // Devolvemos el valor del elemento superior
        }
    }
};

int main() {
    Pila pila; // Creamos una pila vacía

    // Agregamos elementos a la pila
    pila.push(1);
    pila.push(2);
    pila.push(3);

    // Recorremos la pila
    cout << "Pila actual: ";
    while (!pila.estaVacia()) {
        cout << pila.top() << " "; // Obtenemos el elemento superior de la pila con top()
        pila.pop(); // Eliminamos el elemento superior de la pila con pop()
    }
    cout << endl;

    return 0;
}
/*7. Escribir un programa que implemente una pila y una cola utilizando 
una lista enlazada y realice algunas operaciones básicas con ellas
(por ejemplo, push, pop, etc.).
a. cuales es la estrategia de una pila
b. cual es la estrategia de una cola
c. cree una pila con valores ingresados por el 
usuario, el tamaño de la pila deber ser como mínimo 10
d. mostrar el contenido de la pila
*/

#include <iostream>
using namespace std;

// Clase Nodo que representa un nodo de la lista enlazada
class Nodo {
public:
    int valor;
    Nodo* siguiente;
};

// Clase Pila que representa una pila implementada con una lista enlazada
class Pila {
private:
    Nodo* tope; // puntero al nodo superior de la pila
public:
    Pila() { // constructor por defecto
        tope = NULL;
    }
    void push(int valor) { // insertar un elemento en la pila
        Nodo* nuevo = new Nodo();
        nuevo->valor = valor;
        nuevo->siguiente = tope;
        tope = nuevo;
    }
    int pop() { // quitar y devolver el elemento superior de la pila
        if (tope == NULL) {
            cout << "La pila está vacía." << endl;
            return -1;
        }
        int valor = tope->valor;
        Nodo* temp = tope;
        tope = tope->siguiente;
        delete temp;
        return valor;
    }
};

// Clase Cola que representa una cola implementada con una lista enlazada
class Cola {
private:
    Nodo* frente; // puntero al nodo frontal de la cola
    Nodo* final; // puntero al nodo final de la cola
public:
    Cola() { // constructor por defecto
        frente = NULL;
        final = NULL;
    }
    void encolar(int valor) { // insertar un elemento en la cola
        Nodo* nuevo = new Nodo();
        nuevo->valor = valor;
        nuevo->siguiente = NULL;
        if (final == NULL) {
            frente = nuevo;
            final = nuevo;
        }
        else {
            final->siguiente = nuevo;
            final = nuevo;
        }
    }
    int desencolar() { // quitar y devolver el elemento frontal de la cola
        if (frente == NULL) {
            cout << "La cola está vacía." << endl;
            return -1;
        }
        int valor = frente->valor;
        Nodo* temp = frente;
        frente = frente->siguiente;
        delete temp;
        return valor;
    }
};

// Función principal
int main() {
    Pila pila;
    Cola cola;
    
    // Agregar elementos a la pila
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);
    pila.push(6);
    pila.push(7);
    pila.push(8);
    pila.push(9);
    pila.push(10);
    


    // Quitar elementos de la pila y mostrarlos en pantalla
    cout << "Elementos de la pila: ";
    while (true) {
        int valor = pila.pop();
        if (valor == -1) {
            break;
        }
        cout << valor << " ";
    }
    cout << endl;

    // Agregar elementos a la cola
    cola.encolar(11);
    cola.encolar(12);
    cola.encolar(13);
    cola.encolar(14);
    cola.encolar(15);
    cola.encolar(16);
    cola.encolar(17);
    cola.encolar(18);
    cola.encolar(19);
    cola.encolar(20);
   

    // Quitar elementos de la cola y mostrarlos en pantalla
    cout << "Elementos de la cola: ";
    while (true) {
        int valor = cola.desencolar();
        if (valor == -1) {
            break;
        }
        cout << valor << " ";
    }
    cout << endl;


    // Creación de una pila con valores ingresados por el usuario
    Pila mi_pila;
    int cantidad;
    cout << "Ingrese la cantidad de valores que desea agregar a la pila: ";
    cin >> cantidad;
    for(int i = 1; i <= cantidad; i++){
        int valor;
        cout << "Ingrese el valor: " << i << ": ";
        cin >> valor;
        mi_pila.push(valor);
    }
    
    cout << "La pila creada es: ";
   
    while (true) {
        int valor = mi_pila.pop();
        if (valor == -1) {
            break;
        }
        cout << valor << " ";
    }

    return 0;
}
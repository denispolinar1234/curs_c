/*10. Escriba un programa que simule el juego de adivinar un número. 
El programa deberá generar un número aleatorio entre 1 y 100 y pedirle 
al usuario que adivine cuál es. Si el usuario ingresa un número incorrecto, 
el programa deberá indicarle si el número a adivinar es mayor o menor al que ingresó. 
El juego termina cuando el usuario adivina el número correcto.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   
    srand(time(NULL)); // inicializar la semilla para generar numeros aleatorios 
    int num_aleatorio = rand() % 100 + 1; // generar un número aleatorio entre 1 y 100
    int intentos = 0; // contador de intentos
    
    int num_ingresado;
    //bucle do_while, finalizará cuando adivine el numero aleatorio
    do {
        cout << "Ingrese un número entre 1 y 100: ";
        cin >> num_ingresado;
        
        if (num_ingresado < num_aleatorio) {
            cout << "El número a adivinar es mayor." << endl;
        }
        else if (num_ingresado > num_aleatorio) {
            cout << "El número a adivinar es menor." << endl;
        }
        
        intentos++; // aumentar el contador de intentos
    } while (num_ingresado != num_aleatorio);
    
    cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;
    
    return 0;
}
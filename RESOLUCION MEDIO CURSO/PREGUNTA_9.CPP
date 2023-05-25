//9. Escriba un programa que solicite al usuario ingresar un número entero positivo 
//y luego imprima la secuencia de números
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    //rrecorer los numeros de 1 a "n" para evaluar
    for (int i = 1; i <= num; i++) {
       
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz ";//imprime "FizzBuzz" si "i" es divisible entre 3 y 5
        }
        else 
        if (i % 3 == 0) 
        {
            cout << "Fizz ";//imprime  "Fizz" si "i" es divisible por 3
        }
        else 
        if (i % 5 == 0) 
        {
            cout << "Buzz ";//imprime "Buzz" si "i" es divisible por 5
        }
        else 
        {
            cout << i << " ";//imprime "i" si no es divible por 3, por 5 o por ambos
        }

    }
    cout << endl;
    
    return 0;
}
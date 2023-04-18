#include <iostream>
using namespace std;

//funcion calculadora de operaciones basicas: "+", "-", "*","/"
void calculadora (int numero_1,int numero_2,char _operador){
    switch(_operador) {
        case '+':
            cout << numero_1 << " + " << numero_2 << " = " << numero_1 + numero_2;
            break;
        case '-':
            cout << numero_1 << " - " << numero_2 << " = " << numero_1 - numero_2;
            break;
        case '*':
            cout << numero_1 << " * " << numero_2 << " = " << numero_1 * numero_2;
            break;
        case '/':
            cout << numero_1 << " / " << numero_2 << " = " << numero_1 / numero_2;
            break;
        default:
            // Si el operador ingresado no es válido, se muestra un mensaje de error
            cout << "ERROR";
            break;
    }

}
//funcion para mostrar resultado de la operacion
void mostrar_resultado(int numero1,int numero2,char _op){
    calculadora(numero1,numero2,_op);
    
}
//funcion principal
int main() {
    char operador;
    double num_1, num_2;

    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese dos números: " << endl;
    cin >> num_1 >> num_2;

    mostrar_resultado(num_1,num_2,operador);//llamamos a la fncion para mostrar resultado

    return 0;
}
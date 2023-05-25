//5. Escriba un programa que simule una calculadora con funciones básicas de suma, resta, división y multiplicación, 
//el usuario deberá escoger que operación va a realizar

#include<iostream>
using namespace std;
//funcion paar hacer las operaciones basicas de suma,resta,multiplicacion y division
void calculadora (int num1,int num2,char op){
    //switch para evaluar segun op
    switch (op)
    {
    case '+':// si se ingresa por teclado el operador "+" 
        cout<<"La suma es: "<<num1+num2;//en esta opcion se realiza la suma
        break;
     case '-':
        cout<<"La resta es: "<<num1-num2;
        break;
     case '*':
        cout<<"La multiplicación es: "<<num1*num2;
        break;
     case '/':
        if (num2!=0)
        {
            cout<<"La división es: "<<num1/num2;
        }
        else{
            cout<<"INDETERMINADO";
        }
        break;
        default:
        //si el usuario digita otro operador que no sea +,-,*,/
        cout<<"Operacion no valida";
        break;
    }
    
}

int main(){
    int numero_1,numero_2;
    char operacion;
    //pedimos al ussrio que digite los dos numeros a operar
    cout<<"Digite el primer número: ";cin>>numero_1;
    cout<<"Digite el segundo número: ";cin>>numero_2; 
    //solicitamos la operacion que desea realizar
    cout<<"¿Qué operación desea realizar? \na)+\nb)-\nc)*\nd)/\n";
    cin>>operacion;
    //imprimimos el resutado llamando a la funcion calculadora 
    calculadora(numero_1,numero_2,operacion);

    return 0;
}
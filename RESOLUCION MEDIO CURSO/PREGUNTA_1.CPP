//1. Escribir un programa que calcule la suma de los números pares e impares de un arreglo
//de enteros. 

#include<iostream>
using namespace std;

//funcion para suma de los numeros pares e imares de un arreglo
int suma_pares(int arreglo[10],int tamaño){
    int suma_par=0;
    //recorremos el arreglo con un bucle for
    for (int i = 1; i <=tamaño; i++)
    {
        // si el número es par, lo sumamos a la variable suma_par
        if (arreglo[i]%2==0)
        {
            suma_par=suma_par+arreglo[i];
        }

        
    }
    //retornamos la suma de los pares
    return suma_par;
}
//rrecorremos el arreglo con un bucle for
int suma_impares(int arreglo1[10], int tamaño) {
    int suma_impar = 0;
    // si el número es impar, lo sumamos a la variable suma_impar
    for (int i = 0; i < tamaño; i++) {
        if (arreglo1[i] % 2 == 1) {
            suma_impar += arreglo1[i];
        }        
    }
    //retornamos la suma de los numeros pares
    return suma_impar;
}


int main(){
    int numeros[10]={1,2,3,4,5,6,7,8,9,10};
    int tamaño1=sizeof(numeros)/sizeof(numeros[0]);

    // imprimimos la suma de los números pares llamando a la función suma_pares
    cout<<"La suma de los numero pares es: "<<suma_pares(numeros,tamaño1)<<endl;
    // imprimimos la suma de los números impares llamando a la función suma_impares
    cout<<"La suma de los umeros impares: "<<suma_impares(numeros,tamaño1);
    return 0;
}
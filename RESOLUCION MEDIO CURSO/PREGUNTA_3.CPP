//3. Escribir un programa que solicite al usuario un arreglo y 
//luego ordene el arreglo de mayor a menor y de menor a mayor

#include<iostream>
using namespace std;
//funcion para ordenar los numeros de mayor a menor
void mayor_a_menor(int arreglo[10],int tamaño){
    int vartemp;
    //utilizamos dos bucles(for anidado) para ordenar los numeros de mayor a menor
    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (arreglo[j] < arreglo[j+1])
            {
                int varTemp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1]= varTemp;
            }
        }
    }
    //rrecorremos el arreglo ordenado y lo imprimimos en orden descendente
    for (int i = 0; i < tamaño; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    

}


//funcion para ordenar los numeros de menor a mayor
void menor_a_mayor(int arreglo[10],int tamaño){
    int vartemp;
    //utilizamos dos bucles(for anidado) para ordenar los numeros de menor a mayor
    for (int i = 0; i < tamaño - 1; i++)
    {
        for (int j = 0; j < tamaño - i - 1; j++)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                int varTemp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1]= varTemp;
            }
        }
    }
    cout<<"\n";
    //rrecorremos el arreglo ordenado y lo imprimimos en orden ascendente
    for (int i = 0; i < tamaño; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    

} 
int main(){
    int arreglo[10];
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);
    //// Este ciclo for es para solicitar al usuario que ingrese un número en cada posición del arreglo.
    for (int i = 0; i < tamaño; i++)
    {
        cout<<"Digite un numero en la posicion ["<<i<<"] del arreglo: ";
        cin>>arreglo[i];
    }
    //imprimimos el arreglo ordenado en forma descendente
    mayor_a_menor(arreglo,tamaño);
    ////imprimimos el arreglo ordenado en forma ascendente
    menor_a_mayor(arreglo,tamaño);
    

    return 0;
}
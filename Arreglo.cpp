#include<iostream>
#include<algorithm>
using namespace std;


int numero_mayor(int arreglo[10],int tamaño){
    int mayor=arreglo[0];

   for (int i = 0; i < tamaño-1; i++)
    {
        if (arreglo[i+1]>mayor)
        {
            mayor=arreglo[i+1];
        }
       
    }
    return mayor;
}

int numero_menor(int arreglo[10],int tamaño){
    int menor=arreglo[0];
    
    for (int i = 0; i < tamaño-1; i++)
    {
        if (arreglo[i+1]<menor)
        {
            menor=arreglo[i+1];
        }
    }
    return menor;
}

int promedio_arreglo(int arreglo[10],int tamaño){
    int suma=0,promedio=0;

    for (int i = 0; i < tamaño; i++)
    {
        suma+=arreglo[i];
    }
    promedio=suma/tamaño;

    return promedio;

}

double mediana(int arreglo[10], int tamaño) {

    int vartemp;

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
    

    if (tamaño % 2 != 0) {
        return (double)arreglo[tamaño / 2];
    }
    else {
        return (double)(arreglo[(tamaño - 1) / 2] + arreglo[tamaño / 2]) / 2;
    }

}

void repite(int arreglo[10],int tamaño){
    int cont,num_veces=1,num_repite;
    for (int i = 0; i < tamaño-1; i++)
    {
        cont=1;
        for (int j = i+1; j < tamaño; j++)
        {
            //evalua los numeros que se repiten del arreglo
            if (arreglo[i]==arreglo[j])
            {
                cont++;  //contador para las veces que se repite los numeros iguales del arreglo
                cout<< "El numero que se repite es: "<<arreglo[i]<<" se repite "<<cont<<"veces"<<endl;
            }
  
        }
        cont=0;
    }

    
}
void suma_items(int arreglo[10],int tamaño){
    int suma_de_items=0; 
    for (int i = 0; i < tamaño; i++)
    {
        suma_de_items+=i;
    }
    cout<<"la suma de items es:"<< suma_de_items<<endl;
}

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
    cout<<"\n";
}

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
    cout<<"\n";
} 

void reemplazar(int arreglo[10], int tamaño){
    int num=25;
    if(tamaño % 2 == 0){  // Si el tamaño del arreglo es par
        arreglo[tamaño/2] = num;  // Reemplazar en la posición del medio
        arreglo[tamaño/2 - 1] = num;  // Reemplazar en la posición anterior al medio
    }
    else{  // Si el tamaño del arreglo es impar
        arreglo[tamaño/2] = num;  // Reemplazar en la posición del medio
    }
    cout<<"Arreglo reemplazado el valor en pa posicion en medio"<<endl;

    for (int i = 0; i < tamaño; i++)
    {
        cout<<arreglo[i]<<" ";
    }
    
}

int main(){
    int arreglo[10]={1,7,3,4,5,4,7,7,9,10};
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);

    cout<<"El numero mayor es: "<<numero_mayor(arreglo,tamaño)<<endl;

    cout<<"El numero menor es: "<<numero_menor(arreglo,tamaño)<<endl;

    cout<<"El promedio del arrglo es: "<<promedio_arreglo(arreglo,tamaño)<<endl;
    
    cout<<"La mediana del arreglo es: "<<mediana(arreglo,tamaño)<<endl;
    //llamando a la funcion que imprime los numeos que se repiten y a la vez el numero de veces que se repiten
    repite(arreglo,tamaño);

    //llamndo a la funcion que suma los items
    suma_items(arreglo,tamaño);

    //llamndo a la funcion que ordena los valores del arreglod e mayor a menor

    mayor_a_menor(arreglo,tamaño);

    //llamndo a la funcion que ordena los valores del arreglod de menor a mayor
    menor_a_mayor(arreglo,tamaño);

    //llamando a la funcion que reemplaza el valor medio de la funcion
    reemplazar(arreglo,tamaño); 

    return 0;
}
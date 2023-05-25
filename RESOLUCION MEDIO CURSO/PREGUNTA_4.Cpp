///4. Escribir un programa que encuentre el número mayor, el número menor, el promedio, la media , la mediana , 
//cual es el número que se repite más veces de un arreglo de enteros de 10 ítems

#include<iostream>
#include<algorithm>
using namespace std;

//funcion para hallar el numero mayor de un arreglo
int numero_mayor(int arreglo[10],int tamaño){
    int mayor=arreglo[0];//se inicializa lavariable mayor con el valor del arreglo en la posicion 0
    //recorremos el arrgeglo para encontrar el numero mayor mediante un bucle for
   for (int i = 0; i < tamaño-1; i++)
    {   //comparamos el siguiente numero del arreglo con mayor
        if (arreglo[i+1]>mayor)
        {
            //si el siguiente valor del arreglo resulta ser  mayor, lo asignamos en "mayor" 
            mayor=arreglo[i+1];
        }
       
    }
    return mayor;
}

//funcion para hallar el numero menor de un arreglo
int numero_menor(int arreglo[10],int tamaño){
    int menor=arreglo[0];
    //recorremos el arrgeglo para encontrar el numero menor mediante un bucle for
    for (int i = 0; i < tamaño-1; i++)
    {   //comparamos el siguiente numero del arreglo con menor
        if (arreglo[i+1]<menor)
        {   //si el siguiente valor del arreglo resulta ser  menor, lo asignamos en "menor" 
            menor=arreglo[i+1];
        }
    }
    return menor;
}
//promedio para calcular el promedio 
int promedio_arreglo(int arreglo[10],int tamaño){
    int suma=0,promedio=0;
    //bucle for para sumar los valores del arreglo 
    for (int i = 0; i < tamaño; i++)
    {
        suma+=arreglo[i];
    }
    promedio=suma/tamaño;
    //retornmamos el valor del promedio
    return promedio;

}
//funcion para hallar la mediana
double mediana(int arreglo[10], int tamaño) {
    double mediana1,mediana2;
    // Si el tamaño del arreglo es impar, se encuentra la mediana
    if (tamaño % 2 != 0) {
        mediana1=arreglo[tamaño / 2];

        return mediana1;
    }
    // Si el tamaño del arreglo es par, se encuentra la media de las dos posibles medianas
    else {
        mediana2=(arreglo[(tamaño - 1) / 2] + arreglo[tamaño / 2]) / 2;
        return mediana2;
    }

}
//bucle for para hallar el valor que más se repite
int repite(int arreglo[10],int tamaño){
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
                  
            }
  
        }
        if (cont>num_veces)
        {
            cont=num_veces;
            num_repite=arreglo[i];    
        } 
    }

    return num_repite;
    
}

int main(){
    int arreglo[10]={1,7,3,4,5,4,7,7,9,10};
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);
    //imprimo el numero menor del arregloo llamndo a la funcion "numero_mayor"
    cout<<"El numero mayor es: "<<numero_mayor(arreglo,tamaño)<<endl;
    //imprimo el numero menor del arreglo llamndo a la funcion "numero_menor"
    cout<<"El numero menor es: "<<numero_menor(arreglo,tamaño)<<endl;
    //imprimo el promeio de los valores del arreglo llamando a la funcion "promedio_arreglo"
    cout<<"El promedio del arrglo es: "<<promedio_arreglo(arreglo,tamaño)<<endl;
    //imprimo la mediana del arreglo llamando a la funcion "mediana"
    cout<<"La mediana del arreglo es: "<<mediana(arreglo,tamaño)<<endl;
    //imprimo el numero que mas se repite del arregloo llamando a la funcion "repite"
    cout<<"El numero que más se repite es: "<<repite(arreglo,tamaño);
    
    return 0;
}
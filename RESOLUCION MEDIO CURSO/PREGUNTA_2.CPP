//2. Escribir un programa para calcule el área de un triángulo, el perímetro de un triangulo
#include<iostream>

using namespace std;

//funcion para hallar el area del triengulo
int area_triangulo(int ladoA,int ladoB){
    int area=0;
    //se calcula el area del triangulo y se almacena en la variable  area
    area=(ladoA*ladoB)/2;
    //retornamos el area del triangulo
    return area;
}

//funcion para hallar el perimetro del triangulo
int perimetro_triangulo(int ladoA,int ladoB,int ladoC){
    int perimetro=0;

    perimetro=ladoA+ladoB+ladoC;
    //retornamos el area del triangulo
    return perimetro;
}
//funcion principal
int main(){
    int lado_a,lado_b,lado_c;
    //pedir al usuario los valores de los lados del triangulo
    cout<<"Digite el valor del cateto opuesto del triangulo: ";
    cin>>lado_a;

    cout<<"Digite el valor del cateto adyacente del triangulo: ";
    cin>>lado_b;

    cout<<"Digite el valor de la hipotenusa del triangulo: ";
    cin>>lado_c;

    //imprimimos el area del triangulo llamandp a la funcion "area_triangulo"
    cout<<"\n El area de triangulo es: "<<area_triangulo(lado_a,lado_b)<<endl;
    //imprimimos el perimetr del triángulo llamando a la función "area_triangulo"
    cout<<"El perimetro del triangulo es: "<<perimetro_triangulo(lado_a,lado_b,lado_c);

    return 0;
}
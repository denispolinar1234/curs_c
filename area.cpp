#include<iostream>

using namespace std;
//funcion para hallar el área 
int area_rectangulo (int a, int b){
    int c;
    c=a*b;

    return c;
}
//funcion principal
int main(){
    int a,b;
    
    cout<<"Ingrese la longitud del lado menor: ";cin>>a;

    cout<<"Ingrese la longitud del lado mayor: ";cin>>b;

    cout<<"El area del rectangulo es: "<<area_rectangulo(a,b);

    return 0;
}
#include<iostream>

using namespace std;

float promedio(float a,float b,float c)
{
    float d=(a+b+c)/3;
    return d;

}

int main(){
    float a,b,c;

    cout<<"Ingrese la primera nota: ";cin>>a;

    cout<<"Ingrese la segunda nota: ";cin>>b;

    cout<<"Ingrese la tercera nota: ";cin>>c;

    if (promedio(a,b,c)>=10.5)
    {
        cout<<"El promedio de tu nota es: "<<promedio(a,b,c);
        cout<<"APROVADO";

    }
    else{
        cout<<"DESAPROVADO";
    }
    

    return 0;
}

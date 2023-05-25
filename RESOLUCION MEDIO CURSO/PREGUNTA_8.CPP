#include <iostream>
using namespace std;


// Función que calcula el promedio de 3 notas y lo retorna
double calcularPromedio(double nota1, double nota2, double nota3) {
    double promedio = (nota1 + nota2 + nota3) / 3;
    return promedio;
}

int main() {
    double nota1,nota2,nota3;
    //pedir al usuario que digite las notas
    cout<<"Digite la primera nota: ";cin>>nota1;
    cout<<"Digite la segunda nota: ";cin>>nota2;
    cout<<"Digite la tercera nota: ";cin>>nota3;
    
    // Mostrar el promedio de las notas llamando a la funcion "calcularpromedio"
    cout << "El promedio de las notas es: "<< calcularPromedio(nota1,nota2,nota3)<<endl;

    return 0;
}f
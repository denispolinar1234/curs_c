#include<iostream>
#include<string>
#include<ctime>
#include"estudiante.cpp"

using namespace std;

int main(){
    Estudiante est1("0020200200", "FIIS","polinareugeniod@gmail.com","Polinar Eugenio","Denis Lister","Internado","10/09/2000","75760431");
    est1.getDatos();
    
    return 0; 
}
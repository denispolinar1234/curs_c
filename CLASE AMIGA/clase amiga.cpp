#include <iostream>
#include <string>

#include "clase01.cpp"
using namespace std;

class ClaseAmiga
{
    private:
    string valor;
    public:
    ClaseAmiga(string _valor="")
    {
        valor = _valor;
    }

    void imprimir(int numero){
        Clase01 c;
        c.setValor(numero);
        c.imprimir2();
    }

};
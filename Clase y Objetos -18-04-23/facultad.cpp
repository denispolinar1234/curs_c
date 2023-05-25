#include <iostream>
#include <string.h>

using namespace std;

class Facultad
{
private:
    string codigo;
    string nombre;
    string sigla;

public:
    // metodos y constructores

    Facultad(string _codigo, string _nombre, string _sigla)
    {
        codigo = _codigo;
        nombre = _nombre;
        sigla = _sigla;
    }

    // getter and setter
    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string code)
    {
        codigo = code;
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string nombre_)
    {
        nombre = nombre_;
    }

    string getSigla()
    {
        return sigla;
    }

    void setSigla(string sigla_)
    {
        sigla = sigla_;
    }

    string toString(){
        string descripcion=codigo + " " + nombre + " " + sigla;
        return descripcion;
    }

    void imprimir (){
        cout<<codigo<<"\t"<<nombre<<"\t"<<sigla;
    }
};

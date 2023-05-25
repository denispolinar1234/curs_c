#include <iostream>
#include <string>

using namespace std;

class Investigador
{
    //atributos de la clase
private:
    string codigo;
    string especialidad;
    string libros_publicados;

public:
    // constructor
    Investigador(string _codigo, string _especialidad, string _libros_publicados)
    {
        codigo = _codigo;
        especialidad = _especialidad;
        libros_publicados = _libros_publicados;
    }
    // metodos de getter an setter
    string getCodigo()
    {
        return codigo;
    }

    void setCodigo(string codigo_)
    {
        codigo = codigo_;
    }

    void setEspecialidad(string _especialidad)
    {
        especialidad = _especialidad;
    }

    string getEspecialidad()
    {
        return especialidad;
    }

    string getLibros_publicados()
    {
        return libros_publicados;
    }

    void setLibros_publicados(string Libros_publicados_)
    {
        libros_publicados = Libros_publicados_;
    }

    string getDataInvestigador(){
        string data_inves = "Codigo Estudiante: "+codigo+", Especialidad: "+especialidad+", Libros publicados: "+libros_publicados;
        return data_inves;
    }

};
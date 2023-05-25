#include <iostream>
#include <string>
#include <ctime>
#include "profesor.cpp"
#include "investigador.cpp"

using namespace std;

class Profesor_investigador: public Profesor, public Investigador{
    private:
    string tema_investigacion;
    
    public:
    //connstructor
    Profesor_investigador(string tema_investigacion_,string _nombres,string _apellidos,string _dni,string _facultad,string _codigo, string _especialidad, string _libros_publicados):Profesor(_nombres,_apellidos,_dni,_facultad),Investigador(_codigo, _especialidad,_libros_publicados){
        tema_investigacion=tema_investigacion_;
    }

    void mostrardatosProfesor(){
        cout<<"Los datos del Profesor son: "<<endl;
        cout<<getDataProfesor()<<endl;
    }

    void mostrardatosInvestigador(){
        cout<<"Los datos del Profesor como Investigador es: "<<endl;
        cout<<getDataInvestigador()<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<" "<<endl;
        cout<<"--------------------------------------------------------"<<endl;
    }
 
};
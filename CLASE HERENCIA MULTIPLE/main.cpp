#include <iostream>
#include <string>
#include <ctime>
#include "profesor_investigador.cpp"

using namespace std;

int main(){
    //
    Profesor_investigador prof1("REDES","Wihtman","Ore Guzman","54879623","FIIS","0020220358","Redes","Fibra Optica, Simulacion de Redes");
    Profesor_investigador prof2("INGERTOS","Denis","Polinar Eugenio","25487963","AGRO","0020212589","Fitotecnia","Irrigacion, Ingertos: factores ...");
    Profesor_investigador prof3("BIOMECANICA COMPUTACIONAL","Frank","Rivera Raymondi","85479621","FIME","0020220458","BIOMECANICA","Manual de reparacion, Sistema mecanico y electrico");
    Profesor_investigador prof4("Produccion animal","Jose","Pizarro Salome","54875784","FZ","0020220698","Bases de la produccion animal","Nutricion animal, Manual de zootecnia");
    Profesor_investigador prof5("Reforestacion","Fredy","Pizarro Salome","25487963","FORESTAL","002022589","Produccion Forestal","La poda, Sanidad Forestal");
    
    //
    prof1.mostrardatosProfesor();
    prof1.mostrardatosInvestigador();

    prof2.mostrardatosProfesor();
    prof2.mostrardatosInvestigador();

    prof3.mostrardatosProfesor();
    prof3.mostrardatosInvestigador();

    prof4.mostrardatosProfesor();
    prof4.mostrardatosInvestigador();

    prof5.mostrardatosProfesor();
    prof5.mostrardatosInvestigador();

    

    return 0;
}
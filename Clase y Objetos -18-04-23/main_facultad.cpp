#include<iostream>
#include<string.h>
#include "facultad.cpp"

using namespace std;

int main(){
    Facultad facu("001","facultad Ing. En Informatica y Sistemas","FIIS");
    Facultad facu2("002","facultad Ing. Mecanica Electrica","FIME");
    Facultad facu3("003","facultad Ing. Agronomia ","agro");

    cout<<facu.toString()<<endl;
    facu2.imprimir();

    //arreglos

    Facultad facultades[3]={facu,facu2,facu3};

    for (int i = 0; i < 3; i++)
    {
        facultades[i].imprimir();    
    }

    for (int i = 0; i < 3; i++)
    {
        if (facultades[i].getSigla()=="FIME")
        {
            facultades[i].setSigla("004");
        }

        if (facultades[i].getCodigo()=="agro")
        {
            facultades[i].setCodigo("AGRO");
        }    
    }
    
    return 0;
}
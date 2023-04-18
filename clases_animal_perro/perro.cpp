#include<iostream>
#include<string>
#include<ctime>
#include "animal.cpp"

using namespace std;

class Perro : Animal{
private:
    string sentido_olfato;
    
    

public:
    //constructor
    Perro (string _sentido_olfato,string _orejas,string _cola, string _pelaje,string _ojos, int _nro_patas,string _dientes, string _familia) : Animal (_orejas,_cola,_pelaje,_ojos,_nro_patas,_dientes,_familia)
    {
        sentido_olfato=_sentido_olfato;
    }

    //metodos modificadores

    string getSentido_olfato(){
        return sentido_olfato;
    }

   
 

    void setSentido_olfato(string sentido_olfato_){
        sentido_olfato=sentido_olfato_;
    }

   

    void getDatos(){
        cout<<getOrejas()<<"\t"<<getCola()<<"\t"<<getPelaje()<<"\t"<<getOjos()<<"\t"<<getNro_patas()<<"\t"<<getDientes()<<"\t"<<getFamilia()<<endl;
    }

    
};

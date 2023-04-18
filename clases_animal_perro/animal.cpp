#include<iostream>

using namespace std;

class Animal{
private:
    string orejas;
    string cola;
    string pelaje;
    string ojos;
    int nro_patas;
    string dientes;
    string familia;

public:
    //constructor
    Animal(string _orejas,string _cola, string _pelaje,string _ojos, int _nro_patas,string _dientes, string _familia){
        orejas=_orejas;
        cola=_cola;
        pelaje=_pelaje;
        nro_patas=_nro_patas;
        dientes=_dientes;
        familia=_familia;
    }

    //metodos modificadores

    string getOrejas(){
        return orejas;
    }

    string getCola(){
        return cola;
    }

    string getPelaje(){
        return pelaje;
    }

    string getOjos(){
        return ojos;
    }


    int getNro_patas(){
        return nro_patas;
    }

    string getDientes(){
        return dientes;
    }

    string getFamilia(){
        return familia;
    }

    
    void setOrejas(string _orejas_){
        orejas=_orejas_;
    }

     void setCola(string _cola_){
        cola=_cola_;
    }

    void setPelaje(string _pelaje_){
        pelaje=_pelaje_;
    }

    void setOjos(string ojos_){
        ojos=ojos_;
    }

    void setNro_patas(int nro_patas_){
        nro_patas=nro_patas_;
    }

    void setDientes(string dientes_){
        dientes=dientes_;
    }

    void setFamilia(string familia_){
        familia=familia_;
    }
    
};
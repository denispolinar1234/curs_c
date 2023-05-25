#include<iostream>
#include<math.h>
#include<string>

using namespace std;

class Curso{
    private:
    string codigo;
    string descripcion;
    int credito;
    float nota1=0;
    float nota2=0;
    float nota3=0;
    //constructor
    public:

    Curso(string _codigo,string _descripcion,int _credito){
        codigo=_codigo;
        descripcion=_descripcion;
        credito=_credito;
    }
    //getter and setter

    string getCodigo(){
        return codigo;
    }
    string getDescripcion(){
        return descripcion;
    }

    void setDescripion(string descripcion_){
        descripcion=descripcion_;
    }

    void setCodigo(string codigo_){
        codigo=codigo_;
    }

    int getCredito(){
        return credito;
    }
    float getNota1(){
        return nota1;
    }
    float getNota2(){
        return nota2;
    }
    float getNota3(){
        return nota3;
    }

    void setCredito(int credito_){
        credito=credito_;
    }

    void setNota1(float nota1_){
        nota1=nota1_;
    }

    void setNota2(float nota2_){
        nota2=nota2_;
    }

    void setNota3(float nota3_){
        nota3=nota3_;
    }

    float promedio(){
        float pro=0;
        pro=(nota1+nota2+nota3)/3;
        
        return pro;
    }  

};
#include <iostream>

using namespace std;

class Cuadrilatero
{
private:
    int ancho;
    int largo;
    int area;
    int perimetro;

public:
    // constructor

    Cuadrilatero(int _ancho, int _largo)
    {
        ancho = _ancho;
        largo = _largo;
    }
    //metodos modificadores

    int getAncho(){
        return ancho;
    }

    int getLargo(){
        return largo;
    }

    void setAncho(int _anch){
        ancho=_anch;
    }

    
    void setLargo(int _alt){
        largo=_alt;
    }

    //metodos 

    int Area(){
        int areas=ancho*largo;
        return areas;
    }

    int Perimetro(){
        int perimetros=(2*ancho)+(2*largo);
        return perimetros;
    }

    void mostrar_datos(){
        cout<<ancho<<"\t"<<largo<<endl;
    }

    

};
int main()
{
    //crear objetos de clase cuadrilatero
    Cuadrilatero crd1(12,15);
    Cuadrilatero crd2(21,25);
    Cuadrilatero crd3(28,28);
    //imprimir lados del cuadrilatero 
    crd1.mostrar_datos();
    crd2.mostrar_datos();
    cout<<"\n";
    //modificar lados del cuadrilatero 1
    crd1.setAncho(10);
    crd1.setLargo(10);
    //modificar lados del cuadrilatero 2
    crd2.setAncho(9);
    crd2.setLargo(13);
    //imprimir los nuevos valores de los lados de los cuarilateros
    cout<<"Valores modificados de los cuadrilateros 1 y 2"<<endl;
    crd1.mostrar_datos();
    crd2.mostrar_datos();
    //sumatotia de todos los los lados de los tres cuadrilateros
    int suma_lados_cuadrilateros;
    suma_lados_cuadrilateros=crd1.Perimetro()+crd2.Perimetro()+crd3.Perimetro();
    cout<<"La sumatoria de todos los lados es:"<<suma_lados_cuadrilateros<<endl;
    //calcular el area por cada cuadrilatero
    cout<<"El area del cuadrilatero 1 es: "<<crd1.Area()<<endl;
    cout<<"El area del cuadrilatero 2 es: "<<crd2.Area()<<endl;
    cout<<"El area del cuadrilatero 3 es: "<<crd3.Area()<<endl;
    //calcular el perimetro por cada cuadrilatero
    cout<<"El perimetro del cuadrilatero 1 es: "<<crd1.Perimetro()<<endl;
    cout<<"El perimetro del cuadrilatero 2 es: "<<crd2.Perimetro()<<endl;
    cout<<"El perimetro del cuadrilatero 3 es: "<<crd3.Perimetro()<<endl;
    //sumatoria total de areas
    int sumatoria_total_area;
    sumatoria_total_area= crd1.Area()+crd2.Area()+crd3.Area();
    cout<<"La sumatoria total de los areas es: "<<sumatoria_total_area<<endl;
    //sumatoria total de perimetros
    int sumatoria_total_perimetro;
    sumatoria_total_perimetro= crd1.Perimetro()+crd2.Perimetro()+crd3.Perimetro();
    cout<<"La sumatoria total de los perimetros es: "<<sumatoria_total_perimetro;

    return 0;
}
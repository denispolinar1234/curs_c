#include <iostream>
#include <math.h>

using namespace std;
// crear clase

class Triangulo{
    private:
    int base;
    int altura;
    int hipotenusa;
    float area;
    float perimetro;

    // constructores y metodos
    // constructor
    public:
    Triangulo(int _altura, int _base)
    {
        base = _base;
        altura = _altura;
    }
    
    // metodos
    // getter and setter

    int getBase()
    {
        return base;
    }

    int getAltura()
    {
        return altura;
    }

    

    void setBase(int _base)
    {
        base = _base;
    }
    void setAltura(int _altura)
    {
        altura = _altura;
    }
    
    // funciones

    float calcular_hipotenusa()
    {
        float hipotenusa = sqrt((base*base) + (altura*altura));
        return hipotenusa;
    }

    float Perimetro()
    {
        float perimetro = base + altura + hipotenusa;
        return perimetro;
    }

    float Area(){
        float area1 = ((base * altura) / 2);
        return area1;
    }

};

int main(){

    Triangulo Triangulo_1(4, 5);
    Triangulo Triangulo_2(3, 4);

    cout<<Triangulo_1.calcular_hipotenusa()<<endl;
    cout<<Triangulo_2.calcular_hipotenusa();
    Triangulo_1.setBase(3);
    Triangulo_1.setAltura(4);
    cout<<Triangulo_1.calcular_hipotenusa()<<endl;

    return 0;
}

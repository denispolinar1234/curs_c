#include <iostream>
#include <string>
#include "vehiculo.cpp"


using namespace std;

class Automoviles : Vehiculo
{
private:
    string color, marca;
public:
    // constructor
    Automoviles(string _color, string _marca,string _cilindrada_de_motor, string _numero_de_asientos, string _numero_de_ruedas, string _numero_de_puertas, string _certificacion_de_seguridad) : Vehiculo(_cilindrada_de_motor, _numero_de_asientos, _numero_de_ruedas, _numero_de_puertas, _certificacion_de_seguridad)
    {
        color = _color;
        marca = _marca;
        
    }

    // getter and setter

    string getColor()
    {
        return color;
    }

    string getMarca()
    {
        return marca;
    }

    void setColor(string color_)
    {
        color = color_;
    }

    void setMarca(string marca_)
    {
        marca = marca_;
    }

    // Método para obtener los datos del vehículo
    string getDatos_automoviles(){
        string datos = "Cilindrada del motor: " + getCilindradaDeMotor() + "\n";
        datos += "Número de asientos: " + getNumeroDeAsientos() + "\n";
        datos += "Número de ruedas: " + getNumeroDeRuedas() + "\n";
        datos += "Número de puertas: " + getNumeroDePuertas() + "\n";
        datos += "Certificación de seguridad: " + getCertificacionDeSeguridad() + "\n";
        datos += "Color: " + color +" Marca: " + marca + "\n";
        return datos;
    }

   
};
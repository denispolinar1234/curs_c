#include <iostream>
#include <string>
#include "vehiculo.cpp"


using namespace std;

class Motocicleta : public Vehiculo
{
private:
    string color_M, marca_M;

public:
    // constructor
    Motocicleta(string color_=" ", string marca_=" ",string _cilindrada_de_motor=" ", string _numero_de_asientos=" ", string _numero_de_ruedas=" ", string _numero_de_puertas=" ", string _certificacion_de_seguridad=" ") : Vehiculo(_cilindrada_de_motor, _numero_de_asientos, _numero_de_ruedas, _numero_de_puertas, _certificacion_de_seguridad)
    {
        color_M = color_;
        marca_M = marca_;
    }

    // getter and setter

    string getColor()
    {
        return color_M;
    }

    string getMarca()
    {
        return marca_M;
    }

    void setColor(string color_)
    {
        color_M = color_;
    }

    void setMarca(string marca_)
    {
        marca_M = marca_;
    }

    // Método para obtener los datos del vehículo
    string getDatos_motocicleta(){
        string datos = "Cilindrada del motor: " + getCilindradaDeMotor() + "\n";
        datos += "Número de asientos: " + getNumeroDeAsientos() + "\n";
        datos += "Número de ruedas: " + getNumeroDeRuedas() + "\n";
        datos += "Número de puertas: " + getNumeroDePuertas() + "\n";
        datos += "Certificación de seguridad: " + getCertificacionDeSeguridad() + "\n";
        datos += "Color: " + color_M +" Marca: " + marca_M + "\n";
        return datos;
    }

};
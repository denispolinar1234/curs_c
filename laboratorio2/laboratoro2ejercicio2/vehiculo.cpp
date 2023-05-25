/*
2. Elabore un programa que implemente una clase denominada vehiculo que 
contenga los siguientes atributos cilindrada de motor
numero de asientos, numero de ruedas, numero de puertas, certificacion de seguridad.
implemente dos clases automoviles y motocicleta que   hereden los 
atributos de vehiculo, y contengan atributos de color y marca
se desea contar con un arreglo de 10 automoviles y 5 motocicletas. 
implementar un metodo para imprimir un reporte con la siguiente estructura
nombre de la tienda, lista de automoviles a detalle y lista motocicletas 
*/

#include<iostream>

using namespace std;
class Vehiculo{
    private:
    string cilindrada_de_motor,numero_de_asientos;
    string numero_de_ruedas,numero_de_puertas,certificacion_de_seguridad;
    public:
    //constructor
    Vehiculo(string _cilindrada_de_motor=" ",string _numero_de_asientos=" ",string _numero_de_ruedas=" ",string _numero_de_puertas=" ",string _certificacion_de_seguridad=" "){
        cilindrada_de_motor=_cilindrada_de_motor;
        numero_de_asientos=_numero_de_asientos;
        numero_de_ruedas=_numero_de_ruedas;
        numero_de_puertas=_numero_de_puertas;
        certificacion_de_seguridad=_certificacion_de_seguridad;
    }

    // Getter y Setter para cilindrada_de_motor
    string getCilindradaDeMotor()  {
        return cilindrada_de_motor;
    }

    void setCilindradaDeMotor(string _cilindrada_de_motor) {
        cilindrada_de_motor = _cilindrada_de_motor;
    }

    // Getter y Setter para numero_de_asientos
    string getNumeroDeAsientos(){
        return numero_de_asientos;
    }

    void setNumeroDeAsientos(string _numero_de_asientos) {
        numero_de_asientos = _numero_de_asientos;
    }

    // Getter y Setter para numero_de_ruedas
    string getNumeroDeRuedas(){
        return numero_de_ruedas;
    }

    void setNumeroDeRuedas(string _numero_de_ruedas) {
        numero_de_ruedas = _numero_de_ruedas;
    }

    // Getter y Setter para numero_de_puertas
    string getNumeroDePuertas() {
        return numero_de_puertas;
    }

    void setNumeroDePuertas(string _numero_de_puertas) {
        numero_de_puertas = _numero_de_puertas;
    }

    // Getter y Setter para certificacion_de_seguridad
    string getCertificacionDeSeguridad(){
        return certificacion_de_seguridad;
    }

    void setCertificacionDeSeguridad(string _certificacion_de_seguridad) {
        certificacion_de_seguridad = _certificacion_de_seguridad;
    }
};


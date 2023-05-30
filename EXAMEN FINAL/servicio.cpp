#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "cliente.cpp"
#include "repuestos.cpp"

using namespace std;

class Servicio
{
private:
    int id_servicio;
    string nombreservicio;
    double tiempo;
    string nombre_empleado;
    int empleadoId;
    Cliente cliente;
    string _repuestos;
    int numrepuestos;
    string fecha;
    int precio;
    Repuestos repuestos[10];
    Repuestos repuesto;

public:
    Servicio(int _id_servicio = 0, string _nombreservicio = " ", double _tiempo = 0, string _nombre_empleado = " ", int _empleadoId = 0, string _fecha = " ", int _precio = 0)
    {
        id_servicio = _id_servicio;
        nombreservicio = _nombreservicio;
        tiempo = _tiempo;
        empleadoId = _empleadoId;
        fecha = _fecha;
        precio = _precio;
        nombre_empleado = _nombre_empleado;
    }

    int getId_servicio()
    {
        return id_servicio;
    }

    string getFecha()
    {
        return fecha;
    }

    string getNombreServicio()
    {
        return nombreservicio;
    }

    string getRepuestos()
    {
        return _repuestos;
    }

    int getNumrepuestos()
    {
        return numrepuestos;
    }

    void setCliente(Cliente _cliente)
    {
        cliente = _cliente;
    }

    void CostoRepuestos()
    {
    }

    int getPrecio()
    {
        return precio;
    }

    double getTiempo()
    {
        return tiempo;
    }

    Repuestos getRepuesto()
    {
        return repuesto;
    }

    void setRepuestos(Repuestos _repuesto)
    {
        repuesto = _repuesto;
    }

    void agregarRepuesto(Repuestos repuesto)
    {
        if (numrepuestos < 10)
        {
            repuestos[numrepuestos] = repuesto;
            numrepuestos++;
        }
    }

    double getCostoTotal()
    {
        double costoTotal = 0.0;

        for (int i = 0; i < numrepuestos; i++)
        {
            costoTotal += repuestos[i].getPrecio();
        }

        return costoTotal;
    }

    void mostrarRepuestosNecesarios(string nombre, Servicio servicios[10])
    {
        cout << "Repuestos necesarios para cada servicio:" << endl;

        for (int i = 0; i < 10; i++)
        {
            Servicio servicio = servicios[i];
            if (servicio.getId_servicio() != 0 && servicio.getNombreServicio() == nombre)
            {
                cout << "Servicio: " << servicio.getNombreServicio() << endl;
                cout << "Repuestos:" << endl;

                for (int j = 0; j < servicio.getNumrepuestos(); j++)
                {
                    Repuestos repuesto = servicio.repuestos[j];
                    cout << "- " << repuesto.getNombreRepuestos() << endl;
                }

                cout << endl;
            }
        }
    }

    void comprarRepuestoGenerarReporte(string nombreRepuesto, Repuestos repuestos[10], Servicio servicios[10], int idServicio)
    {
        bool encontrado = false;
        Servicio *servicioRealizado = nullptr;

        for (int i = 0; i < 10; i++)
        {
            Servicio &servicio = servicios[i];
            if (servicio.getId_servicio() == idServicio)
            {
                servicioRealizado = &servicio;
                break;
            }
        }

        if (servicioRealizado != nullptr)
        {
            for (int j = 0; j < servicioRealizado->getNumrepuestos(); j++)
            {
                Repuestos repuesto = servicioRealizado->repuestos[j];
                if (repuesto.getNombreRepuestos() == nombreRepuesto)
                {
                    encontrado = true;
                    cout << "¡Repuesto encontrado!" << endl;
                    cout << "Nombre del repuesto: " << repuesto.getNombreRepuestos() << endl;
                    cout << "Modelo: " << repuesto.getModelo() << endl;
                    cout << "Precio: " << repuesto.getPrecio() << endl;

                    // Agregar aquí el código para realizar la compra del repuesto

                    // Generar reporte TXT del servicio y el repuesto
                    ofstream reporte1("reporte.txt");
                    if (reporte1.is_open())
                    {
                        reporte1 << "Servicio realizado: " << servicioRealizado->getNombreServicio() << endl;
                        reporte1 << "Repuesto necesario: " << repuesto.getNombreRepuestos() << endl;
                        // Agregar más detalles o información relevante al reporte si es necesario
                        reporte1.close();
                        cout << "Se ha generado el reporte del servicio y el repuesto en el archivo 'reporte.txt'." << endl;
                    }
                    else
                    {
                        cout << "No se pudo abrir el archivo para generar el reporte." << endl;
                    }

                    break;
                }
            }
        }

        if (!encontrado)
        {
            cout << "No se encontró el repuesto necesario." << endl;
        }
    }
};

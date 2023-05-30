#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Cliente
{
private:
    int id_cliente;
    string nombre;
    string email;
    vector<int> compras;

public:
    Cliente(int _id_cliente = 0, string _nombre = " ", string _email = " ")
    {
        id_cliente = _id_cliente;
        nombre = _nombre;
        email = _email;
    }
    int getId()
    {
        {
            return id_cliente;
        }
    }
    string getNombre()
    {
        return nombre;
    }
    string getEmail()
    {
        return email;
    }
    /*
    void generarReporteClientesMasComunes(string nombre_cliente)
    {
        map<string, int> clientesContador;

        cout << "Ingrese el nombre de los clientes (escriba 'n' para finalizar):" << endl;

        while (true)
        {
            cout << "Nombre: ";
            getline(cin, nombre_cliente);

            if (nombre_cliente == "n")
                break;

            clientesContador[nombre_cliente]++;
        }

        // Ordenar los clientes por frecuencia de ingreso (de mayor a menor)
        vector<pair<string, int>> clientesOrdenados;
        for (const auto &elemento : clientesContador)
        {
            clientesOrdenados.emplace_back(elemento.first, elemento.second);
        }
        sort(clientesOrdenados.begin(), clientesOrdenados.end(), [](const auto &a, const auto &b)
             { return a.second > b.second; });

        // Generar reporte TXT
        ofstream reporte("reporte_clientes_mas_comunes.txt");
        if (reporte.is_open())
        {
            reporte << "Reporte de los Clientes Más Comunes" << endl
                    << endl;

            for (const auto &par : clientesOrdenados)
            {
                reporte << "Nombre: " << par.first << endl;
                reporte << "Frecuencia de ingreso: " << par.second << " veces" << endl;
                reporte << endl;
            }

            reporte.close();
            cout << "Se ha generado el reporte de los clientes más comunes en el archivo 'reporte_clientes_mas_comunes.txt'." << endl;
        }
        else
        {
            cout << "No se pudo abrir el archivo para generar el reporte." << endl;
        }
    }*/
};
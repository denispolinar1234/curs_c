#include <iostream>
#include <string>
#include "fstream"
#include <map>
#include "moto.cpp"
#include "servicio.cpp"

using namespace std;

class Motorin
{
public:
    string logo;
    Producto productos[10];
    Servicio servicios[10];
    Cliente clientes[10];
    Repuestos repuestos[10];
    Moto motos[10];
    int numproducto;
    int numrepuestos;

public:
    Motorin(string _logo)
    {
        logo = _logo;
    }

    // get del arreglo Productos
    Producto *getProductos()
    {
        return productos;
    }
    // get del arreglo Servicios
    Servicio *getServicios()
    {
        return servicios;
    }
    /*

    void tamaño( int tamaño){
        return tamaño;
    }*/
    void agregarRepuesto(Repuestos repuesto)
    {
        for (int i = 0; i < 10; i++)
        {
            if (numrepuestos < 10)
            {
                repuestos[numrepuestos] = repuesto;
                numrepuestos++;
            }
        }
    }

    void agregarProducto(Producto producto)
    {
        // Verificar si el producto ya existe en el inventario
        for (Producto prod : productos)
        {
            if (prod.getIdProducto() == producto.getIdProducto())
            {
                cout << "El producto con ID " << producto.getIdProducto() << " ya existe en el inventario." << endl;
                return;
            }
        }

        // Si el producto no existe, agregarlo al inventario
        for (int i = 0; i < 10; i++)
        {
            if (numproducto < 10)
            {
                productos[numproducto] = producto;
                numproducto++;
            }
        }

        cout << "Producto agregado con éxito: " << producto.getNombreProducto() << endl;
    }
    // metodo para imprimir productos

    void agregarCliente(Cliente cliente)
    {
        // Verificar si el cliente ya existe
        for (Cliente cli : clientes)
        {
            if (cli.getId() == cliente.getId())
            {
                cout << "El cliente con ID " << cliente.getId() << " ya existe." << endl;
                return;
            }
        }

        // Si el cliente no existe, agregarlo
        for (int i = 0; i < 10; i++)
        {
            if (numproducto < 10)
            {
                clientes[numproducto] = cliente;
                numproducto++;
            }
        }
        cout << "Cliente agregado con éxito: " << cliente.getNombre() << endl;
    }

    // metodo para agregar moto

    void agregarMoto(Moto moto)
    {
        // Verificar si el cliente ya existe
        for (Moto mot : motos)
        {
            if (mot.getIdProducto() == moto.getIdProducto())
            {
                cout << "El cliente con ID " << moto.getIdProducto() << " ya existe." << endl;
                return;
            }
        }

        // Si el cliente no existe, agregarlo
        for (int i = 0; i < 10; i++)
        {
            if (numproducto < 10)
            {
                motos[numproducto] = moto;
                numproducto++;
            }
        }
        cout << "Cliente agregado con éxito: " << moto.getNombreProducto() << endl;
    }
    // metodo generador de reporte de venta de productos

    void generarReporte(string atencion)
    {
        ofstream archivo("reporte.txt", ::ios::app); // Abrir el archivo en modo "append"
        if (archivo.is_open())
        {
            archivo << atencion << "\n"; // Escribir la atención en el archivo
            archivo.close();             // Cerrar el archivo
            cout << "Se ha generado el reporte exitosamente." << endl;
        }
        else
        {
            cout << "No se pudo abrir el archivo para generar el reporte." << endl;
        }
    }
    // metodo generador de servicos realizados
    /**/
    void generarReporteServicio(int id, Servicio servicio[10])
    {
        ofstream archivo("reporte_servicios.txt", std::ios::app); // Abrir el archivo en modo "append"
        if (archivo.is_open())
        {
            for (int i = 0; i < 10; i++)
            {
                if (servicio[i].getId_servicio() == id)
                {
                    archivo << "Servicio realizado:"
                            << "\n";
                    archivo << "ID: " << servicio[i].getId_servicio() << "\n";
                    archivo << "Nombre: " << servicio[i].getNombreServicio() << "\n";
                }
            }
           
            archivo.close(); // Cerrar el archivo
            cout << "Se ha generado el reporte del servicio exitosamente." << std::endl;
        }
        else
        {
            cout << "No se pudo abrir el archivo para generar el reporte del servicio." << std::endl;
        }
    }
    // generar reporte de servicios y productos  vendidos
    void generarReporteServicioYProductosComprados(int id, Servicio servicio, Servicio servicios[10], Producto productos[10])
    {
        ofstream archivo("reporte_servicio_productos.txt", std::ios::app); // Abrir el archivo en modo "append"
        if (archivo.is_open())
        {
            for (int i = 0; i < 10; i++)
            {
                if (servicios[i].getId_servicio() == id)
                {
                    Servicio servicio = servicios[i];
                    archivo << "Servicio realizado:"
                            << "\n";
                    archivo << "ID: " << servicio.getId_servicio() << "\n";
                    archivo << "Nombre: " << servicio.getNombreServicio() << "\n";
                    archivo << "Duración: " << servicio.getTiempo() << "\n";
                    archivo << "Precio: " << servicio.getPrecio() << "\n";
                    archivo << "Fecha: " << servicio.getFecha() << "\n";
                    archivo << "==============================="
                            << "\n";
                }
            }
            archivo << "Productos comprados durante el servicio:"
                    << "\n";
            for (int i = 0; i < 10; i++)
            {
                Producto producto = productos[i];
                archivo << "ID: " << producto.getIdProducto() << "\n";
                archivo << "Nombre: " << producto.getNombreProducto() << "\n";
                archivo << "==============================="
                        << "\n";
            }

            archivo.close(); // Cerrar el archivo
            std::cout << "Se ha generado el reporte de servicio y productos comprados exitosamente." << std::endl;
        }
        else
        {
            std::cout << "No se pudo abrir el archivo para generar el reporte de servicio y productos comprados." << std::endl;
        }
    }

    // metodo para reporte stock
    void reporteStock(Producto productos[10])
    {
        cout << "Reporte de Stock:" << endl;
        cout << "=================" << endl;

        for (int i = 0; i < 10; i++)
        {
            Producto producto = productos[i];

            cout << "Producto: " << producto.getNombreProducto() << endl;
            cout << "Categoría: " << producto.getCategoria() << endl;
            cout << "Fecha de registro: " << producto.getFecha_registro() << endl;
            cout << "Cantidad: " << producto.getCantidad() << endl;
            cout << endl;
        }
    }
    void Menu_producto(Producto productos[10])
    {
        cout << "Lista de productos"
             << "\n";
        cout << "==================="
             << "\n";
        for (int i = 0; i < 10; i++)
        {
            Producto producto = productos[i];
            cout << "Id producto: -->  " << producto.getIdProducto() << " ||Nombre : -->" << producto.getNombreProducto() << endl;
        }
    }

    void reporteServicios(Servicio servicios[10])
    {
        cout << "Reporte de Servicios:" << endl;
        cout << "====================" << endl;

        for (int i = 0; i < 10; i++)
        {
            Servicio servicio = servicios[i];

            cout << "Id : " << servicios[i].getId_servicio() << endl;
            cout << "Fecha: " << servicios[i].getFecha() << endl;
            cout << "Descripción: " << servicios[i].getNombreServicio() << endl;

            cout << "Repuestos utilizados:" << endl;
            for (int j = 0; j < servicio.getNumrepuestos(); j++)
            {
                Repuestos repuesto = servicios[j].getRepuestos();
                cout << "- " << repuestos[i].getNombreRepuestos() << endl;
            }

            cout << endl;
        }
    }

    void MenuServicio(Servicio servicios[10])
    {
        for (int i = 0; i < 10; i++)
        {
            Servicio servicio = servicios[i];

            cout << "Id : --> " << servicios[i].getId_servicio() << "  Nombre servicio: --> " << servicios[i].getNombreServicio() << endl;
        }
    }

   

    void generarReporteStock(string nombreArchivo, Producto productos[10])
    {
        ofstream archivo(nombreArchivo);

        if (archivo.is_open())
        {
            archivo << "Reporte de Stock:" << endl;
            archivo << "=================" << endl;

            for (int i = 0; i < 10; i++)
            {
                Producto producto = productos[i];

                archivo << "Producto: " << producto.getNombreProducto() << endl;
                archivo << "Categoría: " << producto.getCategoria() << endl;
                archivo << "Fecha de registro: " << producto.getFecha_registro() << endl;
                archivo << "Cantidad: " << producto.getCantidad() << endl;
                archivo << endl;
            }

            archivo.close();
            cout << "El reporte de stock se ha generado exitosamente en " << nombreArchivo << endl;
        }
        else
        {
            cout << "Error al abrir el archivo." << endl;
        }
    }

    

    Producto *buscarProductoPorNombre(string nombreProducto, Producto productos[10])
    {
        for (int i = 0; i < 10; i++)
        {
            if (productos[i].getNombreProducto() == nombreProducto)
            {
                return &productos[i];
            }
        }
        return nullptr;
    }

    // metodo comprar producto

    void comprarProducto(Producto producto[10], string nombreProducto)
    {
        // Verificar si hay suficiente stock disponible
        if (producto->getCantidad() > 0)
        {
            // Realizar la compra del producto
            producto->setCantidad(producto->getCantidad() - 1);
            cout << "Producto comprado: " << nombreProducto << endl;
        }
        else
        {
            cout << "No hay stock disponible para el producto: " << nombreProducto << endl;
        }
    }

    // metodo buscar servicio
    Servicio *buscarServicio(int id, Servicio servicios[10])
    {
        for (int i = 0; i < 10; i++)
        {
            if (servicios[i].getId_servicio() == id)
            {
                return &servicios[i];
            }
        }
        return nullptr; // Si no se encuentra el servicio, retorna nullptr
    }
    
    // imprimir id y nombre

    void imprimirNombreProducto(Producto productos[10])
    {
        cout << "Lista de ID de Productos:" << endl;
        cout << "========================" << endl;

        for (int i = 0; i < 10; i++)
        {
            cout << "Nombre Producto: " << productos[i].getNombreProducto() << endl;
        }
    }

   //metodo para generar reporte de clientes comunes

    void generarReporteClientesMasComunes(string nombre_cliente)
    {
        map<string, int> clientesMasComunes;

        while (true)
        {
            cout << "Ingrese tu nombre una vez mas ('salir' para terminar): "<<endl;
            cin >> nombre_cliente;
            cout<<"ahora esriva: salir"<<endl;
            cin>>nombre_cliente;

            if (nombre_cliente == "salir")
                break;

            // Incrementar la frecuencia de ingreso del cliente
            clientesMasComunes[nombre_cliente]++;
        }

        ofstream reporte("reporteclientescomunes.txt");
        if (reporte.is_open())
        {
            reporte << "Reporte de clientes más comunes:\n";
            for (const auto &cliente : clientesMasComunes)
            {
                reporte << "Cliente: " << cliente.first << ", Frecuencia de ingreso: " << cliente.second << "\n";
            }
            reporte.close();
            std::cout << "Se ha generado el reporte de clientes más comunes en el archivo 'reporte.txt'.\n";
        }
        else
        {
            std::cout << "No se pudo abrir el archivo para generar el reporte.\n";
        }
    }
};
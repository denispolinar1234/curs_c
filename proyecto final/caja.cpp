#include <string>
#include <fstream>
#include <iostream>
#include "cajero.cpp"
#include "producto.cpp"

using namespace std;

class Caja
{
protected:
    Producto productos[10];
    int contadorFerreteria = 0;
    int contadorElectronica = 0;
    int contadorLibreria = 0;
    int contadorJugueteria = 0;
    int contadorVestimenta = 0;
    int totalProductos = 1;
    ofstream bd; // Variable ofstream
    
    string id_caja;

public:
    // Constructor
    Caja(string _id_caja, int _totalProductos = 0)
    {
        id_caja = _id_caja;
        totalProductos = _totalProductos;
    }

    int getTotalProductos()
    {
        return totalProductos;
    }

    void crearProducto(Producto producto_item)
    {
        int categoria;
        cout << "Tipos de productos: \n";
        cout << "1. Electronica \n";
        cout << "2. Ferreteria \n";
        cout << "3. Libreria \n";
        cout << "4. Jugueteria \n";
        cout << "5. Vestimenta \n\n";
        cout << "Ingrese la categoria: ";
        cin >> categoria;
        if (categoria == 1)
        {
            producto_item.setCategoria("Electronica");
            string nombre;
            cout << "Ingrese el nombre del producto: ";
            cin >> nombre;
            producto_item.setNombre(nombre);
            string marca;
            cout << "Ingrese la marca del producto: ";
            cin >> marca;
            producto_item.setMarca(marca);
            string modelo;
            cout << "Ingrese el modelo del producto: ";
            cin >> modelo;
            producto_item.setModelo(modelo);
            string id;
            cout << "Ingrese el id del producto: ";
            cin >> id;
            producto_item.setId(id);
            float precio;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            producto_item.setPrecio(precio);
            int cantidad;
            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;
            producto_item.setCantidad(cantidad);
            agregarCarrito(producto_item);
        }
        else if (categoria == 2)
        {
            producto_item.setCategoria("Ferreteria");
            string nombre;
            cout << "Ingrese el nombre del producto: ";
            cin >> nombre;
            producto_item.setNombre(nombre);
            string marca;
            cout << "Ingrese la marca del producto: ";
            cin >> marca;
            producto_item.setMarca(marca);
            string modelo;
            cout << "Ingrese el modelo del producto: ";
            cin >> modelo;
            producto_item.setModelo(modelo);
            string id;
            cout << "Ingrese el id del producto: ";
            cin >> id;
            producto_item.setId(id);
            float precio;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            producto_item.setPrecio(precio);
            int cantidad;
            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;
            producto_item.setCantidad(cantidad);
            agregarCarrito(producto_item);
        }
        else if (categoria == 3)
        {
            producto_item.setCategoria("Libreria");
            string nombre;
            cout << "Ingrese el nombre del producto: ";
            cin >> nombre;
            producto_item.setNombre(nombre);
            string autor;
            cout << "Ingrese el autor del producto: ";
            cin >> autor;
            producto_item.setAutor(autor);
            string editorial;
            cout << "Ingrese la editorial del producto: ";
            cin >> editorial;
            producto_item.setEditorial(editorial);
            string id;
            cout << "Ingrese el id del producto: ";
            cin >> id;
            producto_item.setId(id);
            float precio;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            producto_item.setPrecio(precio);
            int cantidad;
            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;
            producto_item.setCantidad(cantidad);
            agregarCarrito(producto_item);
        }
        else if (categoria == 4)
        {
            producto_item.setCategoria("Jugueteria");
            string nombre;
            cout << "Ingrese el nombre del producto: ";
            cin >> nombre;
            producto_item.setNombre(nombre);
            string marca;
            cout << "Ingrese la marca del producto: ";
            cin >> marca;
            producto_item.setMarca(marca);
            string modelo;
            cout << "Ingrese el modelo del producto: ";
            cin >> modelo;
            producto_item.setModelo(modelo);
            string id;
            cout << "Ingrese el id del producto: ";
            cin >> id;
            producto_item.setId(id);
            bool educativo;
            cout << "Ingrese si el producto es educativo: ";
            cin >> educativo;
            if (educativo == 1)
            {
                producto_item.setEducativo(true);
            }
            else
            {
                producto_item.setEducativo(false);
            }
            float precio;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            producto_item.setPrecio(precio);
            int cantidad;
            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;
            producto_item.setCantidad(cantidad);
            agregarCarrito(producto_item);
        }
        else if (categoria == 5)
        {
            producto_item.setCategoria("Vestimenta");
            string nombre;
            cout << "Ingrese el nombre del producto: ";
            cin >> nombre;
            producto_item.setNombre(nombre);
            string marca;
            cout << "Ingrese la marca del producto: ";
            cin >> marca;
            producto_item.setMarca(marca);
            string modelo;
            cout << "Ingrese el modelo del producto: ";
            cin >> modelo;
            producto_item.setModelo(modelo);
            string id;
            cout << "Ingrese el id del producto: ";
            cin >> id;
            producto_item.setId(id);
            string talla;
            cout << "Ingrese la talla del producto: ";
            cin >> talla;
            producto_item.setTalla(talla);
            string color;
            cout << "Ingrese el color del producto: ";
            cin >> color;
            producto_item.setColor(color);
            string material;
            cout << "Ingrese el material del producto: ";
            cin >> material;
            producto_item.setMaterial(material);
            float precio;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            producto_item.setPrecio(precio);
            int cantidad;
            cout << "Ingrese la cantidad del producto: ";
            cin >> cantidad;
            producto_item.setCantidad(cantidad);
            agregarCarrito(producto_item);
        }
        else
        {
            cout << "Categoria no valida" << endl;
        }
    }

    // Funcion para agregar al arreglo
    void agregarCarrito(Producto producto_item)
    {
        if (totalProductos >= 10)
        {
            cout << "No se pueden agregar mas productos" << endl;
            return;
        }
        else
        {
            productos[totalProductos] = producto_item;
            if (producto_item.getCategoria() == "ferreteria" || producto_item.getCategoria() == "Ferreteria")
            {
                contadorFerreteria++;
                totalProductos++;
            }
            else if (producto_item.getCategoria() == "electronica" || producto_item.getCategoria() == "Electronica")
            {
                contadorElectronica++;
                totalProductos++;
            }
            else if (producto_item.getCategoria() == "libreria" || producto_item.getCategoria() == "Libreria")
            {
                contadorLibreria++;
                totalProductos++;
            }
            else if (producto_item.getCategoria() == "jugueteria" || producto_item.getCategoria() == "Jugueteria")
            {
                contadorJugueteria++;
                totalProductos++;
            }
            else if (producto_item.getCategoria() == "vestimenta" || producto_item.getCategoria() == "Vestimenta")
            {
                contadorVestimenta++;
                totalProductos++;
            }
            else
            {
                cout << "Categoria no encontrada" << endl;
            }
        }
    }

    void mostrarTienda()
    {
        int lista = 1;
        for (int i = 0; i < sizeof(productos) / sizeof(productos[0]); i++)
        {
            cout << lista++ << " " << productos[i].getDatos() << endl;
        }
    }

    // Funcion para mostrar el carrito
    string mostrarCarrito()
    {
        string carrito;
        for (int i = 0; i < totalProductos; i++)
        {
            carrito += productos[i].getDatos() + "\n";
        }
        return carrito;
    }

    // Funcion para el ingreso en la base de datos (TXT)
    void ingresoBD(Cajero cajero, Cliente cliente, string tipo)
    {
        bd.open("registro.txt", std::ios::app); // Abrir el archivo txt en append
        if (tipo == "venta")
        {
            
            bd << "[Compra registrada] \n"
               << cajero.getDatos() << "\n"
               << cliente.getDatos() << "\n" // Formato para el guardado
               << mostrarCarrito();          // Guardar el carrito
            
        }
        else if (tipo == "producto_creado")
        {
            bd << "[Producto creado] \n"
               << cajero.getDatos() << "\n"
               << mostrarCarrito();
        }
        else if (tipo == "producto_eliminado")
        {
            bd << "[Producto eliminado] \n"
               << cajero.getDatos() << "\n"
               << mostrarCarrito();
        }
        else if (tipo == "producto_modificado")
        {
            bd << "[Producto eliminado] \n"
               << cajero.getDatos() << "\n"
               << mostrarCarrito();
        }
        else
        {
            cout << "Tipo de registro no valido" << endl;
        }
        bd.close();

        // Cerrar el archivo txt
    }
};
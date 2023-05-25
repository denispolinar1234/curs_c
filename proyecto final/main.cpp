#include <iostream>
#include <fstream>
#include "caja.cpp"

using namespace std;

void titulo_centrado(string titulo)
{
    int i;                       // Contador
    int largo = titulo.length(); // Largo del titulo
    largo = largo + 20;          // Total de 20 espacios, 10 por lado

    for (i = 0; i < largo; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (i = 0; i < largo; i++)
    {
        cout << " ";
        if (i == 5)
        { // 5*2 = 10, Centro del titulo
            cout << titulo;
        }
        cout << " ";
    }
    cout << "\n";
    for (i = 0; i < largo; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
}

int main()
{

    // Atributos
    int total_pago, total_productos;

    // Cajero por defecto
    Cajero gerente("admin", "admin", "Denis", "Gonzalez", "Av. Los Alamos", "987654321", "12345678");

    // Cliente
    Cliente comprador("UC01");

    // Productos
    Producto electronica1("E001", "Electronica", 1000, 1, "Laptop");
    electronica1.setDatosElectronica("HP", "Pavilion");
    Producto ferreteria1("F001", "Ferreteria", 100, 1, "Martillo");
    ferreteria1.setDatosFerreteria("Herramienta", "Truper", "123");
    Producto libreria1("L001", "Libreria", 10, 1, "Lapicero");
    libreria1.setDatosLibreria("Denis", "Editorial");
    Producto jugueteria1("J001", "Jugueteria", 100, 1, "Pelota");
    jugueteria1.setDatosJuguetes("Nike", true);
    Producto vestimenta1("V001", "Vestimenta", 100, 1, "Camisa");
    vestimenta1.setDatosVestimenta("M", "Rojo", "Algodon");
    Producto ejemplo("EJ001", "Electronica", 0, 0, "Ejemplo");

    // Arreglo de productos
    Producto productos[10] = {electronica1, ferreteria1, libreria1, jugueteria1, vestimenta1, ejemplo};

    // Registrando
    Caja principal("001");     // Para la tienda
    Caja cliente("Cliente");   // Para el cliente
    int contadorProductos = 0; // Cuando se agregue un producto, se aumenta el contador

    principal.agregarCarrito(electronica1);
    principal.agregarCarrito(ferreteria1);
    principal.agregarCarrito(libreria1);
    principal.agregarCarrito(jugueteria1);
    principal.agregarCarrito(vestimenta1);
    principal.agregarCarrito(ejemplo);
    int total_productosarreglo = 6; // Total productos

    // Caja
    int opcion = 0, opcion2 = 0; // Opcion del men
    string opcionstring = "";
    int admin_opcion = 0, admin_opcion2;
    string usuario, contrasena;
    string nombre, apellido, direccion, telefono, dni, nuevo;
    do
    {
        system("cls"); // Limpiar pantalla
        titulo_centrado("Tienda de Denis");
        cout << "1. Comprar en la tienda \n";
        cout << "2. Ver carrito \n";
        cout << "3. Pagar \n\n";
        cout << "4. Administrar\n\n";
        cout << "5. Salir \n\n";

        cout << "Ingrese opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            // Comprar en la tienda
            system("cls");
            principal.mostrarTienda();
            cout << "\nIngrese el codigo del producto que desea comprar: ";
            cin >> opcionstring;
            cout << endl;
            // Recorrer el arreglo de productos
            for (int i = 0; i < principal.getTotalProductos(); i++)
            {
                if (opcionstring == productos[i].getId())
                {
                    cout << productos[i].getNombre() << " Agregado" << endl;
                    cliente.agregarCarrito(productos[i]);
                    total_pago = total_pago + productos[i].getPrecio();
                    contadorProductos++;
                    break;
                }
                cout << "...\n";
            }
            cout << "\nProducto agregado correctamente\n";
            system("pause");
            break;
            // Ver carrito
        case 2:
            system("cls");
            titulo_centrado("Carrito");
            cout << "Total : " << contadorProductos << " | Precio total: " << total_pago << "\n\n";
            cout << cliente.mostrarCarrito();
            system("pause");
            break;
            // Pagar
        case 3:
            system("cls");
            titulo_centrado("Carrito");
            cout << "Total : " << contadorProductos << " | Precio total: " << total_pago << "\n\n";
            cout << cliente.mostrarCarrito();
            cout << "\n\n 1. Pagar \n 2. Seguir comprando\n\n";
            cout << "Opcion: ";
            cin >> opcion2;
            if (opcion == 2)
            {
                break;
            }
            system("cls");
            titulo_centrado("Tienda de Denis");
            cout << "Ingrese su Nombre: ";
            cin >> nombre;
            ;
            cout << "Ingrese su Apellido: ";
            cin >> apellido;
            cout << "Ingrese su Direccion: ";
            cin >> direccion; // Prevenir el salto de linea
            cout << "Ingrese su Telefono: ";
            cin >> telefono;
            cout << "Ingrese su DNI: ";
            cin >> dni;
            comprador.setDatos(nombre, apellido, direccion, telefono, dni);
            system("cls");
            titulo_centrado("Tienda de Denis");
            cout << "FACTURA: \n";
            cout << cliente.mostrarCarrito();
            cout << comprador.getDatos();
            cout << "\n\nTotal : " << contadorProductos << " | Precio total: " << total_pago << "\n\n";
            cout << "Gracias por su compra\n\n";
            cliente.ingresoBD(gerente, comprador, "venta");
            system("pause");
            break;
            // Administrar
        case 4:
            do
            {
                system("cls");
                titulo_centrado("Admin Denis");
                cout << "Si se ha equivocado escriba: salir\n\n";
                cout << "Usuario: ";
                cin >> usuario;
                cout << "Contrasena: ";
                cin >> contrasena;
                if (usuario != gerente.getCodigo() || contrasena != gerente.getContrasena())
                {
                    cout << "\nDatos ingresados incorrectos\n";
                    system("timeout 2 >nul");
                    break; // salir
                }
                system("cls");
                titulo_centrado("Admin Denis");
                cout << "1. Agregar producto \n";
                cout << "2. Eliminar producto \n";
                cout << "3. Modificar producto \n";
                cout << "4. Ver productos \n\n";
                cout << "5. Salir \n\n";
                cout << "Ingresar opcion: ";
                cin >> admin_opcion2;
                switch (admin_opcion2)
                {
                case 1:
                // Agregar producto
                    system("cls");
                    titulo_centrado("Admin Denis");
                    principal.crearProducto(ejemplo);
                    total_productosarreglo++;
                    productos[total_productosarreglo] = ejemplo;
                    cout << "\nProducto agregado correctamente\n";
                    principal.ingresoBD(gerente, comprador, "producto_creado");
                    system("timeout 2 >nul");
                    break;
                case 2:
                // Eliminar producto
                    system("cls");
                    titulo_centrado("Admin Denis");
                    cout << "Ingrese el codigo del producto que desea eliminar: ";
                    cin >> opcionstring;
                    for (int i = 0; i < principal.getTotalProductos(); i++)
                    {
                        if (opcionstring == productos[i].getId())
                        {
                            productos[i].setCategoria(" ");
                        }
                    }
                    cout << "Elemento eliminado";
                    principal.ingresoBD(gerente, comprador, "producto_eliminado");
                    system("timeout 2 >nul");
                    break;
                // Modificar producto
                case 3:
                    system("cls");
                    titulo_centrado("Admin Denis");
                    cout << "Ingrese el codigo del producto que desea modificar: ";
                    cin >> opcionstring;
                    for (int i = 0; i < principal.getTotalProductos(); i++)
                    {
                        if (opcionstring == productos[i].getId())
                        {
                            cout << "Ingrese el nuevo nombre: "; cin >> nuevo;
                            productos[i].setNombre(nuevo);
                        }

                    }
                    cout << "Elemento modificado";
                    principal.ingresoBD(gerente, comprador, "producto_modificado");
                    system("timeout 2 >nul");
                    break;
                // Ver productos
                case 4:
                    system("cls");
                    titulo_centrado("Admin Denis");
                    cliente.mostrarCarrito();
                    system("pause");
                    break;
                // Salir
                case 5:
                    cout << "Hasta pronto";
                    system("timeout 2 >nul");
                    break;
                default:
                    cout << "Opcion invalida";
                    system("timeout 2 >nul");
                    break;
                }

            } while (admin_opcion2 != 5);
            break;
            //Salir
        case 5:
            cout << "\nHasta pronto!";
            system("timeout 2 >nul");
            break;
            // Opcion invalida
        default:
            cout << "\nOpcion invalida";
            system("timeout 2 >nul"); // Dormir por 2 segundos
            break;
        }

    } while (opcion != 5); // Salir al elegir 5
}
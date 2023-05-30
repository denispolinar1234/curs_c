#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include "motorin.cpp"

using namespace std;

int main()
{
    Motorin motorin("Motorin INC");

    Producto producto1(123, "moto", 5, "Categoría 1", "2023-05-01");
    Producto producto2(201, "cadena", 10, "Categoría 2", "2023-05-02");
    Producto producto3(302, "llantas", 3, "Categoría 1", "2023-05-03");
    Producto producto4(412, "asientos", 8, "Categoría 3", "2023-05-04");
    Producto producto5(556, "frenos", 2, "Categoría 2", "2023-05-05");
    Producto producto6(647, "amortiguadores", 6, "Categoría 1", "2023-05-06");
    Producto producto7(787, "rodajes", 4, "Categoría 3", "2023-05-07");
    Producto producto8(898, "espejos", 9, "Categoría 2", "2023-05-08");
    Producto producto9(989, "tanques_gas", 7, "Categoría 1", "2023-05-09");
    Producto producto10(101, "motores", 1, "Categoría 3", "2023-05-10");

    // Crear un arreglo para los productos
    Producto productos[10] = {producto1, producto2, producto3, producto4, producto5, producto6, producto7, producto8, producto9, producto10};

    // Agregar productos
    motorin.agregarProducto(producto1);
    motorin.agregarProducto(producto2);
    motorin.agregarProducto(producto3);
    motorin.agregarProducto(producto4);
    motorin.agregarProducto(producto5);
    motorin.agregarProducto(producto6);
    motorin.agregarProducto(producto7);
    motorin.agregarProducto(producto8);
    motorin.agregarProducto(producto9);
    motorin.agregarProducto(producto10);

    // Crear 10 objetos Moto con características específicas
    Moto moto1(1, "Moto 1", 5, "Categoría 1", "Marca 1");
    Moto moto2(2, "Moto 2", 10, "Categoría 2", "Marca 2");
    Moto moto3(3, "Moto 3", 3, "Categoría 1", "Marca 3");
    Moto moto4(4, "Moto 4", 8, "Categoría 3", "Marca 4");
    Moto moto5(5, "Moto 5", 2, "Categoría 2", "Marca 5");
    Moto moto6(6, "Moto 6", 6, "Categoría 1", "Marca 6");
    Moto moto7(7, "Moto 7", 4, "Categoría 3", "Marca 7");
    Moto moto8(8, "Moto 8", 9, "Categoría 2", "Marca 8");
    Moto moto9(9, "Moto 9", 7, "Categoría 1", "Marca 9");
    Moto moto10(10, "Moto 10", 1, "Categoría 3", "Marca 10");
    // Crear un arreglo para las motos
    Moto motos[10] = {moto1, moto2, moto3, moto4, moto5, moto6, moto7, moto8, moto9, moto10};

    // Agregar motos

    motorin.agregarMoto(moto1);
    motorin.agregarMoto(moto2);
    motorin.agregarMoto(moto3);
    motorin.agregarMoto(moto4);
    motorin.agregarMoto(moto5);
    motorin.agregarMoto(moto6);
    motorin.agregarMoto(moto7);
    motorin.agregarMoto(moto8);
    motorin.agregarMoto(moto9);
    motorin.agregarMoto(moto10);

    // Crear 10 objetos Servicio con características específicas
    Servicio servicio1(1, "Cambioaceite", 2.5, "Kevin", 1001, "2023-05-27", 12);
    Servicio servicio2(2, "Reparacion", 1.5, "Denis", 1002, "2023-05-28", 21);
    Servicio servicio3(3, "Mantenimiento", 3.0, "Anibal", 1003, "2023-05-29", 14);
    Servicio servicio4(4, "Pintado", 2.0, "Carlos", 1004, "2023-05-30", 25);
    Servicio servicio5(5, "Planchado", 1.0, "Sabina", 1005, "2023-06-01", 23);
    Servicio servicio6(6, "Cambio_pieza", 2.5, "Jhon", 1006, "2023-06-02", 25);
    Servicio servicio7(7, "Mejoramiento", 1.5, "Polinar", 1007, "2023-06-03", 55);
    Servicio servicio8(8, "Bajada_motor", 3.0, "Withman", 1008, "2023-06-04", 25);
    Servicio servicio9(9, "Complementos", 2.0, "Angel", 1009, "2023-06-05", 23);
    Servicio servicio10(10, "Desabulladura", 1.0, "Sebastian", 1010, "2023-06-06", 10);
    
    //arreglo de servicios

    Servicio servicios[10] = {servicio1, servicio2, servicio3, servicio4, servicio5, servicio6, servicio7, servicio8, servicio9, servicio10};
    
   
    // Crear objetos de la clase Repuestos
    Repuestos repuesto1("Aceite", "Modelo A", 10);
    Repuestos repuesto2("Repuestos", "Modelo B", 15);
    Repuestos repuesto3("Batería", "Modelo C", 50);
    Repuestos repuesto4("pintura", "Modelo D", 80);
    Repuestos repuesto5("Bujías", "Modelo E", 5);
    Repuestos repuesto6("Amortiguadores", "Modelo F", 100);
    Repuestos repuesto7("Radiador", "Modelo G", 70);
    Repuestos repuesto8("Correa de distribución", "Modelo H", 20);
    Repuestos repuesto9("Pastillas de freno", "Modelo I", 30);
    Repuestos repuesto10("Embrague", "Modelo J", 150);
    // arreglo de repuestos
    Repuestos repuestos[10] = {repuesto1, repuesto2, repuesto3, repuesto4, repuesto5, repuesto6, repuesto7, repuesto8, repuesto9, repuesto10};

    for (int i = 0; i < 10; i++)
    {
        servicios[i].agregarRepuesto(repuestos[i]);
    }

    string nombre_cliente;
    int Dni;
    cout << "=== Bienvenido a Motorin Shop ===" << endl;
    cout << "¿Cual es tu nombre?" << endl;

    cin >> nombre_cliente;
    motorin.generarReporteClientesMasComunes(nombre_cliente);
    cout << "Digite su Dni: " << endl;
    cin >> Dni;
    cout << "Hola " << nombre_cliente << " Con DNI:" << Dni << " espero que disfrute nuestra atencion" << endl;

    int opcion;

    do
    {

        cout << "1. Ver catálogo de productos" << endl;
        cout << "2. Ver catálogo de servicios" << endl;
        cout << "3. Comprar producto" << endl;
        cout << "4. Adquirir servicio de taller" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            motorin.reporteStock(productos);
            break;
        case 2:
            motorin.reporteServicios(servicios);
            break;
        case 3:
        {
            string nom;
            cout << "Ingrese el ID del producto que desea comprar: ";
            motorin.imprimirNombreProducto(productos);
            cin >> nom;

            // Resto del código para buscar y comprar el producto

            // Generar reporte de la atención
            std::string atencion = "Producto comprado - ID: " + nom;
            motorin.generarReporte(atencion);
            break;
        }
        case 4:
        {
            int id_servicio;
            string nombre_servicio, nombreRepuesto;
            cout << "Ingrese el ID del servicio que desea adquirir: " << endl;
            motorin.MenuServicio(servicios);
            cin >> id_servicio;
            cout << "Ingrese elnombre del servicio talcomo se muestra: " << endl;
            cin >> nombre_servicio;

            // Generar reporte del servicio
            Servicio *servicioRealizado = motorin.buscarServicio(id_servicio, servicios);
            servicioRealizado->mostrarRepuestosNecesarios( nombre_servicio, servicios);
            cout<<"esriba el nombre del repuesto a comprar:";
            cin>>nombreRepuesto;
            servicioRealizado->comprarRepuestoGenerarReporte( nombreRepuesto,  repuestos,  servicios,  id_servicio);
            break;
        }
        case 0:
             cout << "Gracias por visitar Motorin Shop. ¡Hasta luego!" << endl;
             break;
        default:
             cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
             break;
        }

        cout << endl;

    } while (opcion != 0);

    return 0;
}
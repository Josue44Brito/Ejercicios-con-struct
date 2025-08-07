//Ejercicio 10: Estructura anidada Cliente y Pedido – ingresar y mostrar
#include <iostream>
#include <iomanip>  // Para formato salida
using namespace std;

// Estructura Pedido con producto, cantidad y precio unitario
struct Pedido {
    string producto;
    int cantidad;
    float precio;
};

// Estructura Cliente con nombre, correo y un Pedido
struct Cliente {
    string nombre;
    string correo;
    Pedido pedido;
};

int main() {
    Cliente cliente; // Variable cliente

    // Pedir datos del cliente
    cout << "Ingrese nombre del cliente: ";
    getline(cin, cliente.nombre);

    cout << "Ingrese correo del cliente: ";
    getline(cin, cliente.correo);

    // Pedir datos del pedido
    cout << "Ingrese producto pedido: ";
    getline(cin, cliente.pedido.producto);

    cout << "Ingrese cantidad: ";
    cin >> cliente.pedido.cantidad;

    cout << "Ingrese precio unitario: ";
    cin >> cliente.pedido.precio;

    // Mostrar toda la información
    cout << "\n--- Información del Cliente y Pedido ---\n";
    cout << "Cliente: " << cliente.nombre << endl;
    cout << "Correo: " << cliente.correo << endl;

    cout << "\nPedido:\n";
    cout << left << setw(15) << "Producto"
         << setw(10) << "Cantidad"
         << setw(10) << "Precio Unit." << endl;

    cout << setw(15) << cliente.pedido.producto
         << setw(10) << cliente.pedido.cantidad
         << fixed << setprecision(2) << cliente.pedido.precio << endl;

    // Calcular y mostrar total
    cout << "\nPrecio total: $" << fixed << setprecision(2)
         << cliente.pedido.cantidad * cliente.pedido.precio << endl;

    return 0;
}

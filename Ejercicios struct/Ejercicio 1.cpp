//Ejercicio 2: Estructura Producto – ingresar 5 productos y mostrar en tabla
#include <iostream>
#include <iomanip> // Para formato de salida
using namespace std;

// Definir estructura Producto con nombre, precio y stock
struct Producto {
    string nombre;
    float precio;
    int stock;
};

int main() {
    Producto productos[5]; // Arreglo para 5 productos

    // Ciclo para ingresar datos de cada producto
    for (int i = 0; i < 5; i++) {
        cout << "\nProducto " << i + 1 << ":" << endl;

        cin.ignore(); // Limpiar buffer antes de getline
        cout << "Nombre: ";
        getline(cin, productos[i].nombre);

        cout << "Precio: ";
        cin >> productos[i].precio;

        cout << "Stock: ";
        cin >> productos[i].stock;
    }

    // Mostrar productos en formato tabla
    cout << "\n" << setw(20) << left << "Nombre"
         << setw(10) << "Precio"
         << setw(10) << "Stock" << endl;
    cout << "-------------------------------------------" << endl;

    for (int i = 0; i < 5; i++) {
        cout << setw(20) << left << productos[i].nombre
             << "$" << setw(9) << fixed << setprecision(2) << productos[i].precio
             << setw(10) << productos[i].stock << endl;
    }

    return 0;
}

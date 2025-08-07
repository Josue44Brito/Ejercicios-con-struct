//Ejercicio 8: Estructura Ciudad – mostrar solo ciudades con más de 1 millón habitantes
#include <iostream>
#include <vector>
using namespace std;

// Estructura Ciudad con nombre, país y población
struct Ciudad {
    string nombre;
    string pais;
    int poblacion; // Habitantes
};

int main() {
    int n;
    cout << "Ingrese la cantidad de ciudades: ";
    cin >> n;

    vector<Ciudad> ciudades(n); // Vector para ciudades

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "\nCiudad " << i + 1 << ":" << endl;
        cin.ignore(); // Limpiar buffer

        cout << "Nombre: ";
        getline(cin, ciudades[i].nombre);

        cout << "País: ";
        getline(cin, ciudades[i].pais);

        cout << "Población (número entero): ";
        cin >> ciudades[i].poblacion;
    }

    // Mostrar ciudades con más de 1 millón de habitantes
    cout << "\nCiudades con más de 1 millón de habitantes:\n";
    bool encontrado = false;

    for (const auto& ciudad : ciudades) {
        if (ciudad.poblacion > 1000000) {
            encontrado = true;
            cout << "\nNombre: " << ciudad.nombre
                 << "\nPaís: " << ciudad.pais
                 << "\nPoblación: " << ciudad.poblacion << "\n";
        }
    }

    if (!encontrado) {
        cout << "No se encontraron ciudades con más de 1 millón de habitantes.\n";
    }

    return 0;
}

//Ejercicio 8: Estructura Ciudad � mostrar solo ciudades con m�s de 1 mill�n habitantes
#include <iostream>
#include <vector>
using namespace std;

// Estructura Ciudad con nombre, pa�s y poblaci�n
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

        cout << "Pa�s: ";
        getline(cin, ciudades[i].pais);

        cout << "Poblaci�n (n�mero entero): ";
        cin >> ciudades[i].poblacion;
    }

    // Mostrar ciudades con m�s de 1 mill�n de habitantes
    cout << "\nCiudades con m�s de 1 mill�n de habitantes:\n";
    bool encontrado = false;

    for (const auto& ciudad : ciudades) {
        if (ciudad.poblacion > 1000000) {
            encontrado = true;
            cout << "\nNombre: " << ciudad.nombre
                 << "\nPa�s: " << ciudad.pais
                 << "\nPoblaci�n: " << ciudad.poblacion << "\n";
        }
    }

    if (!encontrado) {
        cout << "No se encontraron ciudades con m�s de 1 mill�n de habitantes.\n";
    }

    return 0;
}

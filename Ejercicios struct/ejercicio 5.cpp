//Ejercicio 5: Estructura Auto � ingresar y mostrar 3 autos
#include <iostream>
#include <iomanip>
using namespace std;

// Estructura Auto con marca, modelo y a�o
struct Auto {
    string marca;
    string modelo;
    int anio;
};

int main() {
    Auto autos[3]; // Arreglo para 3 autos

    // Ingreso de datos
    for (int i = 0; i < 3; i++) {
        cout << "\nAuto " << i + 1 << ":" << endl;
        cin.ignore(); // Limpiar buffer antes de getline

        cout << "Marca: ";
        getline(cin, autos[i].marca);

        cout << "Modelo: ";
        getline(cin, autos[i].modelo);

        cout << "A�o: ";
        cin >> autos[i].anio;
    }

    // Mostrar la informaci�n en formato tabla
    cout << "\n--- Informaci�n de los Autos ---" << endl;
    cout << setw(15) << left << "Marca"
         << setw(15) << "Modelo"
         << setw(10) << "A�o" << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 3; i++) {
        cout << setw(15) << left << autos[i].marca
             << setw(15) << autos[i].modelo
             << setw(10) << autos[i].anio << endl;
    }

    return 0;
}

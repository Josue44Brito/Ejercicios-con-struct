//Ejercicio 7: Estructura Materia – calcular y mostrar promedio de cada materia
#include <iostream>
#include <iomanip>
using namespace std;

// Estructura Materia con nombre y tres notas
struct Materia {
    string nombre;
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de materias: ";
    cin >> n;

    Materia materias[n]; // Arreglo para materias

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "\nMateria " << i + 1 << ":" << endl;
        cin.ignore(); // Limpiar buffer

        cout << "Nombre: ";
        getline(cin, materias[i].nombre);

        cout << "Nota 1: ";
        cin >> materias[i].nota1;

        cout << "Nota 2: ";
        cin >> materias[i].nota2;

        cout << "Nota 3: ";
        cin >> materias[i].nota3;
    }

    // Mostrar nombre y promedio calculado
    cout << "\n--- Promedios de materias ---\n";
    cout << setw(20) << left << "Materia" << setw(10) << "Promedio" << endl;
    cout << "-----------------------------\n";

    for (int i = 0; i < n; i++) {
        float promedio = (materias[i].nota1 + materias[i].nota2 + materias[i].nota3) / 3.0f;
        cout << setw(20) << left << materias[i].nombre
             << fixed << setprecision(2) << promedio << endl;
    }

    return 0;
}

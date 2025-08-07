//Ejercicio 3: Estructura Empleado – ingresar varios y calcular sueldo total
#include <iostream>
#include <iomanip> // Para formato de salida
using namespace std;

// Definir estructura Empleado con nombre, horas trabajadas y salario por hora
struct Empleado {
    string nombre;
    int horasTrabajadas;
    float salarioPorHora;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;

    Empleado empleados[n]; // Arreglo dinámico de empleados

    // Ingreso de datos por empleado
    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado " << i + 1 << ":" << endl;
        cin.ignore(); // Limpiar buffer antes de getline

        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);

        cout << "Horas trabajadas: ";
        cin >> empleados[i].horasTrabajadas;

        cout << "Salario por hora: ";
        cin >> empleados[i].salarioPorHora;
    }

    // Mostrar tabla con datos y sueldo total calculado
    cout << "\n" << setw(20) << left << "Nombre"
         << setw(10) << "Horas"
         << setw(15) << "Salario/Hora"
         << setw(15) << "Sueldo Total" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        float sueldoTotal = empleados[i].horasTrabajadas * empleados[i].salarioPorHora;
        cout << setw(20) << left << empleados[i].nombre
             << setw(10) << empleados[i].horasTrabajadas
             << "$" << setw(14) << fixed << setprecision(2) << empleados[i].salarioPorHora
             << "$" << setw(14) << sueldoTotal << endl;
    }

    return 0;
}

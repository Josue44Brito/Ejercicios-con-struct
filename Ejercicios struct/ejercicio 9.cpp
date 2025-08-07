//Ejercicio 9: Estructura Fecha – ingresar dos fechas y determinar cuál es más reciente
#include <iostream>
using namespace std;

// Estructura Fecha con día, mes y año
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Función para comparar dos fechas:
// Devuelve 1 si fecha1 es más reciente,
// -1 si fecha2 es más reciente,
// 0 si son iguales
int compararFechas(const Fecha& fecha1, const Fecha& fecha2) {
    if (fecha1.anio > fecha2.anio) return 1;
    if (fecha1.anio < fecha2.anio) return -1;

    if (fecha1.mes > fecha2.mes) return 1;
    if (fecha1.mes < fecha2.mes) return -1;

    if (fecha1.dia > fecha2.dia) return 1;
    if (fecha1.dia < fecha2.dia) return -1;

    return 0; // Son iguales
}

int main() {
    Fecha fecha1, fecha2;

    // Pedir ingreso de dos fechas
    cout << "Ingrese la primera fecha (día mes año): ";
    cin >> fecha1.dia >> fecha1.mes >> fecha1.anio;

    cout << "Ingrese la segunda fecha (día mes año): ";
    cin >> fecha2.dia >> fecha2.mes >> fecha2.anio;

    // Comparar fechas usando función
    int resultado = compararFechas(fecha1, fecha2);

    if (resultado == 1)
        cout << "La primera fecha es más reciente.\n";
    else if (resultado == -1)
        cout << "La segunda fecha es más reciente.\n";
    else
        cout << "Ambas fechas son iguales.\n";

    return 0;
}

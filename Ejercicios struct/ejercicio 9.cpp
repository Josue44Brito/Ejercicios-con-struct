//Ejercicio 9: Estructura Fecha � ingresar dos fechas y determinar cu�l es m�s reciente
#include <iostream>
using namespace std;

// Estructura Fecha con d�a, mes y a�o
struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Funci�n para comparar dos fechas:
// Devuelve 1 si fecha1 es m�s reciente,
// -1 si fecha2 es m�s reciente,
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
    cout << "Ingrese la primera fecha (d�a mes a�o): ";
    cin >> fecha1.dia >> fecha1.mes >> fecha1.anio;

    cout << "Ingrese la segunda fecha (d�a mes a�o): ";
    cin >> fecha2.dia >> fecha2.mes >> fecha2.anio;

    // Comparar fechas usando funci�n
    int resultado = compararFechas(fecha1, fecha2);

    if (resultado == 1)
        cout << "La primera fecha es m�s reciente.\n";
    else if (resultado == -1)
        cout << "La segunda fecha es m�s reciente.\n";
    else
        cout << "Ambas fechas son iguales.\n";

    return 0;
}

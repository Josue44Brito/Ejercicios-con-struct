//Ejercicio 4: Estructura Libro � mostrar solo libros despu�s de 2015
#include <iostream>
#include <vector>  // Para usar vector din�mico
#include <algorithm> // Para transform en b�squeda case insensitive
using namespace std;

// Estructura Libro con t�tulo, autor y a�o de publicaci�n
struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de libros: ";
    cin >> n;

    vector<Libro> libros(n); // Vector de libros

    // Ingreso de datos para cada libro
    for (int i = 0; i < n; i++) {
        cout << "\nLibro " << i + 1 << ":" << endl;
        cin.ignore(); // Limpiar buffer antes de getline

        cout << "T�tulo: ";
        getline(cin, libros[i].titulo);

        cout << "Autor: ";
        getline(cin, libros[i].autor);

        cout << "A�o de publicaci�n: ";
        cin >> libros[i].anioPublicacion;
    }

    // Mostrar solo libros publicados despu�s del a�o 2015
    cout << "\nLibros publicados despu�s del a�o 2015:\n";
    bool encontrado = false;

    for (const auto& libro : libros) {
        if (libro.anioPublicacion > 2015) {
            encontrado = true;
            cout << "\nT�tulo: " << libro.titulo
                 << "\nAutor: " << libro.autor
                 << "\nA�o: " << libro.anioPublicacion << "\n";
        }
    }

    if (!encontrado) {
        cout << "No se encontraron libros publicados despu�s de 2015.\n";
    }

    return 0;
}

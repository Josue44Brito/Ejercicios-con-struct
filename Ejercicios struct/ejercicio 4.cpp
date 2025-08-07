//Ejercicio 4: Estructura Libro – mostrar solo libros después de 2015
#include <iostream>
#include <vector>  // Para usar vector dinámico
#include <algorithm> // Para transform en búsqueda case insensitive
using namespace std;

// Estructura Libro con título, autor y año de publicación
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

        cout << "Título: ";
        getline(cin, libros[i].titulo);

        cout << "Autor: ";
        getline(cin, libros[i].autor);

        cout << "Año de publicación: ";
        cin >> libros[i].anioPublicacion;
    }

    // Mostrar solo libros publicados después del año 2015
    cout << "\nLibros publicados después del año 2015:\n";
    bool encontrado = false;

    for (const auto& libro : libros) {
        if (libro.anioPublicacion > 2015) {
            encontrado = true;
            cout << "\nTítulo: " << libro.titulo
                 << "\nAutor: " << libro.autor
                 << "\nAño: " << libro.anioPublicacion << "\n";
        }
    }

    if (!encontrado) {
        cout << "No se encontraron libros publicados después de 2015.\n";
    }

    return 0;
}

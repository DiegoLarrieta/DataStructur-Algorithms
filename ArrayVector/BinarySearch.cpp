#include <iostream>
#include <vector>
#include <algorithm>
// El include algorithm se utiliza cuando hacemos operaciones como aqui por ejemplo el sort.begin y sort.end
using namespace std;

// Debe utilizarse en un arreglo ordenado
// Complejidad: Mejor caso O(1) | Peor caso O(log n)
int busquedaBinaria(vector<int> &datos, int valorBuscar, int &comparacionesBinarias) {
    int inicio = 0, fin = datos.size() - 1;
    int mitad;
    comparacionesBinarias = 0; // Inicializar contador de comparaciones en 0

    // Ciclo para dividir el rango del arreglo a la mitad mientras haya elementos por revisar
    while (inicio <= fin) {
        mitad = (inicio + fin) / 2;
        comparacionesBinarias++; // Aumentar el contador de comparaciones

        // Si el elemento en la posición "mitad" es el valor que buscamos
        if (datos[mitad] == valorBuscar) {
            return mitad; // Devolver el índice donde se encontró el valor
        }

        // Si el valor en la posición "mitad" es mayor al valor que buscamos
        if (datos[mitad] > valorBuscar) {
            fin = mitad - 1; // Ajustar el límite superior del rango
        } else {
            inicio = mitad + 1; // Ajustar el límite inferior del rango
        }
    }

    // Si no se encontró el valor, devolver -1
    return -1;
}

// Función para imprimir los datos del vector
void print(const vector<int> &datos) {
    for (int i = 0; i < datos.size(); i++) {
        cout << datos[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, datoBusca;

    // Leer el número de elementos
    cin >> n;
    vector<int> datos(n);

    // Leer los datos del vector
    for (int i = 0; i < n; i++) {
        cin >> datos[i];
    }

    // Leer el dato que se va a buscar
    cin >> datoBusca;

    // Ordenar los datos en orden ascendente antes de la búsqueda binaria
    sort(datos.begin(), datos.end());

    int comparacionesBinarias, posicion;

    // Realizar la búsqueda binaria
    posicion = busquedaBinaria(datos, datoBusca, comparacionesBinarias);

    // Comparaciones hasta encontrar el valor o tamaño del vector si no se encuentra
    comparacionesBinarias = (posicion == -1 ? datos.size() : (posicion + 1));

    // Mostrar resultados de la búsqueda
    cout << "La posición del dato es: " << posicion << endl;
    cout << "La busqueda binaria hizo: " << comparacionesBinarias << " comparaciones." << endl;

    // Mostrar los datos originales (ordenados para la búsqueda)
    cout << "Datos originales (ordenados): ";
    print(datos);
    cout << "============" << endl;

    // Ordenar los datos en orden descendente para mostrarlos
    cout << "Datos ordenados descendentemente: ";
    sort(datos.begin(), datos.end(), greater<int>());
    print(datos);
    cout << "===========" << endl;
}

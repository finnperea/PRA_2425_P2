#include "DyV.h"
#include <iostream>
#include <vector>
#include<chrono>

int main() {
    // Creamos tres tipos de vectores diferentes para probar las funciones
    std::vector<int> vecInt = {1, 3, 5, 7, 9, 11, 13, 15};


    // Probamos las funciones de búsqueda binaria no recursivas
    int indexInt = binarySearch(vecInt, 7);

    // Printeamos los resultados
    std::cout << "Busqueda binaria no recursiva con int: " << indexInt << std::endl;

    
    // Añadimos vectores int, double y char desordenados para probar el quickSort
    std::vector<int> vecIntUnsorted = {15, 3, 9, 1, 7, 11, 5, 13};


    auto start = std::chrono::system_clock::now();
    quickSort(vecIntUnsorted, 0, vecIntUnsorted.size() - 1);
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> duracion = end - start;
    std::cout << "Tiempo de quickSort con int: " << duracion.count() << "s\n";

    
   
    return 0;
}
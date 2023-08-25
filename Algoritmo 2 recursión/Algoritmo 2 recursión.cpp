#include <iostream>

int MaximoRecursivo(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int maximoResto = MaximoRecursivo(arr, size - 1);
    return std::max(maximoResto, arr[size - 1]);
}

int main() {
    int arreglo[] = { 100, 52, 245, 127, 1245 };
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int maximo = MaximoRecursivo(arreglo, tamano);
    std::cout << "El máximo elemento del arreglo es: " << maximo << std::endl;

    return 0;
}
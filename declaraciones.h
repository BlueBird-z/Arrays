#include <iostream>
using namespace std;

const int SIZE = 11;
int numbers[SIZE] = {2, 4, 1, 6, 5, 10, 3, 9, 7, 8};




int main() {

    // gracias J por el c�digo que fuerza UTF8 y as� vemos mensajes con t�tldes y otros s�mbolos
    setlocale(LC_ALL, "ca_ca.utf8");





    // Imprimir el array original
    cout << "Array original: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Ordenar el array (burbuja)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Imprimir el array ordenado
    cout << "Array ordenado: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Encontrar el valor m�ximo
    int maxVal = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
    cout << "Valor m�ximo: " << maxVal << endl;

    // Encontrar el valor m�nimo
    int minVal = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < minVal) {
            minVal = numbers[i];
        }
    }
    cout << "Valor m�nimo: " << minVal << endl;

    // Calcular el promedio
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / SIZE;
    cout << "Promedio: " << average << endl;

    // Contar ocurrencias de un valor dado
    int valueToFind = 6;
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == valueToFind) {
            count++;
        }
    }
    cout << "El valor " << valueToFind << " aparece " << count << " veces en el array." << endl;

    return 0;
}


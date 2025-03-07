
//Calculo de Numeros primos 

#include <iostream>  // Incluye la biblioteca estándar de entrada/salida para usar cin y cout
#include <vector>    // Incluye la biblioteca para usar la clase vector
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {  // Si el número es menor o igual a 1, no es primo
        return false;
    }
    for (int i = 2; i * i <= num; i++) {  // Itera desde 2 hasta la raíz cuadrada de num
        if (num % i == 0) {  // Si num es divisible por i, no es primo
            return false;
        }
    }
    return true;  // Si no se encontraron divisores, el número es primo
}
vector<int> generarPrimos(int N) {
    vector<int> primos;  // Crea un vector para almacenar los números primos
    int num = 2;  // Comienza a buscar números primos desde 2
    while (primos.size() < N) {  // Mientras no se hayan encontrado N números primos
        if (esPrimo(num)) {  // Verifica si el número actual es primo
            primos.push_back(num);  // Si es primo, lo agrega al vector
        }
        num++;  // Pasa al siguiente número
    }
    return primos;  // Devuelve el vector con los primeros N números primos
}
// Solicitar al usuario el número de primos a generar
cout << "Introduce un número entero positivo N: ";
cin >> N;

// Verificar que N es positivo
if (N > 0) {
    vector<int> primos = generarPrimos(N);  // Genera los primeros N números primos

    // Imprimir los primeros N números primos
    cout << "Los primeros " << N << " números primos son: ";
    for (int i = 0; i < primos.size(); i++) {
        cout << primos[i] << " ";  // Imprime cada número primo
    }
    cout << endl;  // Imprime un salto de línea al final
}
else {
    cout << "Por favor, introduce un número entero positivo mayor que 0." << endl;
}

return 0;  // Indica que el programa terminó correctamente
}
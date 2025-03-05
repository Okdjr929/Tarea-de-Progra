
#include <iostream> // Incluye la biblioteca para operaciones de entrada/salida (cout, cin).
#include <vector> // Incluye la biblioteca para usar vectores (arreglos dinámicos).
#include <limits> // Incluye la biblioteca para usar límites numéricos (como el valor mínimo de un double).

using namespace std; // Usa el espacio de nombres estándar para evitar escribir std:: antes de cout, cin, vector, etc.
int main() {
    const int DIAS_SEMANA = 7; // Define una constante para el número de días en una semana.
    vector<double> ventas(DIAS_SEMANA); // Declara un vector de doubles para almacenar las ventas de cada día.
    double totalVentas = 0.0; // Inicializa una variable para almacenar el total de ventas.
    double maxventas = numeric_limits<double>::min() ; // Inicializa una variable para el máximo de ventas con el valor mínimo posible de un double.
    int diamaximo = -1; // Inicializa una variable para el día con mayores ventas.
    int menor = 0; // Inicializa una variable (aunque no se usa en el código proporcionado).
    bool sinventas = false; // Inicializa una variable booleana para verificar si hubo algún día sin ventas.

    cout << "Registro de Ventas Semanales\n"; // Imprime un encabezado.

    for (int i = 0; i < DIAS_SEMANA; ++i) { // Bucle para iterar a través de los días de la semana.
        cout << "Ingrese las ventas del dia " << i + 1 << ": "; // Pide al usuario que ingrese las ventas para el día actual.
        cin >> ventas[i]; // Lee las ventas ingresadas por el usuario y las almacena en el vector.

        totalVentas += ventas[i]; // Suma las ventas del día al total de ventas.
        if (ventas[i] > maxventas ) { // Verifica si las ventas del día actual son mayores que el máximo actual.
            maxventas = ventas[i]; // Actualiza el máximo de ventas.
            diamaximo = i + 1; // Actualiza el día con mayores ventas.
        }
        if (ventas[i] == 0 ){ // Verifica si las ventas del día actual son cero.
            sinventas = true; // Establece la variable sinventas como verdadera.

        }
    }

    cout << "\nResumen de Ventas Semanales:\n"; // Imprime un encabezado para el resumen.
    for (int i = 0; i < DIAS_SEMANA; ++i) { // Bucle para iterar a través de los días de la semana y mostrar las ventas de cada día.
        cout << "Dia " << i + 1 << ": $" << ventas[i] << "\n"; // Imprime el día y las ventas correspondientes.
    }

    cout << "\nTotal de ventas de la semana: $" << totalVentas << "\n"; // Imprime el total de ventas de la semana.
    if (diamaximo != -1) { // Verifica si se encontró un día con mayores ventas.
       cout << "El dia con mayores ventas fue el dia " << diamaximo << " con $" << maxventas << "\n"; // Imprime el día con mayores ventas y el monto.
    }
    if (sinventas) { // Verifica si hubo algún día sin ventas.
        cout << "Hubo al menos un dia sin ventas.\n"; // Imprime un mensaje indicando que hubo días sin ventas.
    }
    else {
        cout << "Todos los días tuvieron ventas.\n"; // Imprime un mensaje indicando que todos los días tuvieron ventas.
    }

    return 0; // Indica que el programa terminó con éxito.
}

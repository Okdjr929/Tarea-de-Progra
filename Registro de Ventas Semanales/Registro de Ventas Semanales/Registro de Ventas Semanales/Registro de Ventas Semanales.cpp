
#include <iostream>
#include <vector>
#include <limits>

using namespace std;
int main() {
    const int DIAS_SEMANA = 7;
    vector<double> ventas(DIAS_SEMANA);
    double totalVentas = 0.0;
    double maxventas = numeric_limits<double>::min() ;
    int diamaximo = -1;
    int menor = 0;
    bool sinventas = false;

    cout << "Registro de Ventas Semanales\n";

    for (int i = 0; i < DIAS_SEMANA; ++i) {
        cout << "Ingrese las ventas del dia " << i + 1 << ": ";
        cin >> ventas[i];

        totalVentas += ventas[i];
        if (ventas[i] > maxventas ) {
            maxventas = ventas[i];
            diamaximo = i + 1;
        }
        if (ventas[i] == 0 ){
            sinventas = true;

        }
    }

    cout << "\nResumen de Ventas Semanales:\n";
    for (int i = 0; i < DIAS_SEMANA; ++i) {
        cout << "Dia " << i + 1 << ": $" << ventas[i] << "\n";
    }

    cout << "\nTotal de ventas de la semana: $" << totalVentas << "\n";
    if (diamaximo != -1) {
       cout << "El dia con mayores ventas fue el dia " << diamaximo << " con $" << maxventas << "\n";
    }
    if (sinventas) {
        cout << "Hubo al menos un dia sin ventas.\n";
    }
    else {
        cout << "Todos los días tuvieron ventas.\n";
    }

    return 0;
}

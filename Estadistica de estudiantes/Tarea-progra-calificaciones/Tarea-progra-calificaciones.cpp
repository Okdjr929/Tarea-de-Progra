#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main()
{
	int N;

	cout << "Ingrese el numero de estudiantes: ";
	cin >> N;
	
	vector<float>calificaciones(N); //Vector de tipo float, su tamaño depende del número de estudiantes

	for (int i = 0; i < N; i++)	//El contador inica en 0, dado que va N-1, porque las posiciones del vector comienzan en 0
	{
		cout << "Ingrese la calificacion del estudiante " << i + 1 << ": ";
		cin >> calificaciones[i]; //Accedemos al lugar correcto del vector para guardar las calificaciones
	}

	//Inicializamos cada variable para los cálculos correspondientes
	float maxCalificacion = numeric_limits<float>::min(); //Devuelve el valor más alto posiblo del float.
	float minCalificacion = numeric_limits<float>::max(); //Devuele el valor más pequeño positivo del float
	//Inicializamos en 0 para poder operar con sus cantidades
	float sumaCafilicaciones = 0;
	int estudiantesAprobados = 0;
	int estudiantesReprobados = 0;

	for (int i = 0; i < N; i++)
	{
		//Si la calificacion del estudiante es mayor que maxCalificacion, la actualizamos
		if (calificaciones[i] > maxCalificacion) 
		{
			maxCalificacion = calificaciones[i];
		}
		//Lo mismo pasa con minCalificacion
		if (calificaciones[i] < minCalificacion)
		{
			minCalificacion = calificaciones[i];
		}
		
		sumaCafilicaciones += calificaciones[i]; //En cada interación la calificacion se suma a la variable sumaCalificaciones

		if (calificaciones[i] >= 60) //Recorre el vector en la posicon i para verificar que sea mayor o igual a 60
		{
			estudiantesAprobados++; //Incremeta en 1 el valor de estudiantesAprobados
		}
		else {
			estudiantesReprobados++; //De lo contrario incrementa en 1 estudiantesReprobados
		}
	}

	//Calculamos el promedio
	float promedio = sumaCafilicaciones / N; //sumaCalficaciones tiene la suma de todas la calificaiones y la dividimos en N estudiantes

	//Mostramos el resultado
	cout << "La calificacion mas alta es: " << maxCalificacion << endl;
	cout << "La calificaciono mas baja es: " << minCalificacion << endl;
	cout << "El promedio de las calificaciones es: " << promedio << endl;
	cout << "Cantidad de estudiantes aprobados: " << estudiantesAprobados << endl;
	cout << "Cantidad de estudiantes reprobados: " << estudiantesReprobados << endl;

	return 0;
	

}
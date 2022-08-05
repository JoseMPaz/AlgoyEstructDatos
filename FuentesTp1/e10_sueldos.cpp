#include <iostream>
#define NULO 0
#define MSJ_INGRESO_SUELDO "Ingrese un sueldo(0 para terminar de ingresar): "
#define MSJ_ERROR_SUELDO_NEGATIVO "Error, sueldo invalido(sueldos > 0)."
#define SUELDO_MINIMO_POBRE 1.520
#define SUELDO_MINIMO_MEDIO 2.780
#define SUELDO_MINIMO_RICO 5.999
#define ETIQUETA_CANTIDAD_SUELDOS_INDIGENTES "Cantidad de sueldos menores a 1.520: "
#define ETIQUETA_CANTIDAD_SUELDOS_POBRE "Cantidad de sueldos [1.520 , 2.780): "
#define ETIQUETA_CANTIDAD_SUELDOS_MEDIO "Cantidad de sueldos [2.780 , 5.999): "
#define ETIQUETA_CANTIDAD_SUELDOS_RICO "Cantidad de sueldos mayores o iguales a 5.999: "
using namespace std;

int main (void)
{
	float sueldo, sueldo_indigente = 0,  sueldo_pobre = 0,  sueldo_medio = 0, sueldo_rico = 0;

	cout << MSJ_INGRESO_SUELDO;
	cin >> sueldo;	

	while (sueldo != NULO)
	{
		if (sueldo < NULO)
		{
			cerr << MSJ_ERROR_SUELDO_NEGATIVO << endl;
			cout << MSJ_INGRESO_SUELDO;
			cin >> sueldo;	
			continue;
		}
		else
		{		
			if (sueldo < SUELDO_MINIMO_POBRE)
				sueldo_indigente++;
			if (SUELDO_MINIMO_POBRE <= sueldo && sueldo < SUELDO_MINIMO_MEDIO)
				sueldo_pobre++;
			if (SUELDO_MINIMO_MEDIO <= sueldo && sueldo < SUELDO_MINIMO_RICO)
				sueldo_medio++;
			if (SUELDO_MINIMO_RICO <= sueldo)
				sueldo_rico++;
		}
		cout << MSJ_INGRESO_SUELDO;
		cin >> sueldo;	
	}

	cout << ETIQUETA_CANTIDAD_SUELDOS_INDIGENTES << sueldo_indigente << endl;
	cout << ETIQUETA_CANTIDAD_SUELDOS_POBRE << sueldo_pobre << endl;
	cout << ETIQUETA_CANTIDAD_SUELDOS_MEDIO << sueldo_medio << endl;
	cout << ETIQUETA_CANTIDAD_SUELDOS_RICO << sueldo_rico << endl;

	return 0;
}

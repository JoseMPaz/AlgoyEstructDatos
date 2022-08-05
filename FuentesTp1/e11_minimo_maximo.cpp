#include <iostream>
#define MSJ_CANTIDAD_NUMEROS_A_INGRESAR "Indique la cantidad de numeros que va a ingresar: "
#define ETIQUETA_MINIMO "El minimo valor ingresado es "
#define ETIQUETA_MAXIMO "El maximo valor ingresado es "
#define ETIQUETA_POSICION ", se ingreso en la posicion "

using namespace std;

int main (void)
{
	int tope, pos_min, pos_max, min, max, n;
	cout << MSJ_CANTIDAD_NUMEROS_A_INGRESAR;
	cin >> tope;
	
	for (int i = 0; i < tope; i++)
	{
		cin >> n;
		if (i == 0)
		{
			max = min = n;
			pos_min = pos_max = 0;
		}
		else
		{
			if (n < min)
			{
				min = n;
				pos_min = i;
			}
			if (n > max)
			{
				max = n;
				pos_max = i;
			}
		}
	}	

	cout << ETIQUETA_MINIMO << min << ETIQUETA_POSICION << pos_min << endl;
	cout << ETIQUETA_MAXIMO << max << ETIQUETA_POSICION << pos_max << endl;

	return 0;
}

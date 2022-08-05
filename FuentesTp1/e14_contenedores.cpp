#include <iostream>
#define N 100
#define MSJ_INGRESO_ID "Ingrese el id del contenedor: "
#define MSJ_INGRESO_PESO "Ingrese el peso del contenedor: "
#define MSJ_INGRESO_PUERTO_ARRIBO "Ingrese el puerto de arribo del contenedor: "
#define PUERTO_1 1
#define PUERTO_2 2
#define PUERTO_3 3
#define MSJ_ERROR_PUERTO_ARRIBO "Error, puerto invalido(los puertos son 1, 2 o 3)"
#define ETIQUETA_PESO_TOTAL_CONTENEDORES "El peso total de los contenedores es "
#define ETIQUETA_ID_DE_MAYOR_PESO "El id del contenedor de mayor peso es "
#define ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_1 "La cantidad de contenedores en el puerto 1 es "
#define ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_2 "La cantidad de contenedores en el puerto 2 es "
#define ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_3 "La cantidad de contenedores en el puerto 3 es "
using namespace std;

int main (void)
{
	int id, peso, puerto_arribo, acum_pesos = 0, id_mayor_peso, mayor_peso, n_contenedores_puerto1 = 0,
	n_contenedores_puerto2 = 0, n_contenedores_puerto3 = 0;

	for (int i = 0; i < N; i++)
	{
		cout << MSJ_INGRESO_ID;
		cin >> id;
		cout << MSJ_INGRESO_PESO;
		cin >> peso;
		cout << MSJ_INGRESO_PUERTO_ARRIBO;
		cin >> puerto_arribo;

		if (puerto_arribo != PUERTO_1 && puerto_arribo != PUERTO_2 && puerto_arribo != PUERTO_3)
		{
			cerr << MSJ_ERROR_PUERTO_ARRIBO << endl;
			i++;
			continue;
		}
		
		if (i == 0)
		{
			id_mayor_peso = id;
			mayor_peso = peso;
		}
		else if (peso > mayor_peso)
		{
			mayor_peso = peso;
			id_mayor_peso = id;	
		}

		if (puerto_arribo == PUERTO_1)
			n_contenedores_puerto1++;
		if (puerto_arribo == PUERTO_2)
			n_contenedores_puerto2++;
		if (puerto_arribo == PUERTO_3)
			n_contenedores_puerto3++;

		acum_pesos += peso;
	}

	cout << ETIQUETA_PESO_TOTAL_CONTENEDORES << acum_pesos << endl;
	cout << ETIQUETA_ID_DE_MAYOR_PESO << id_mayor_peso << endl;
	cout << ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_1 << n_contenedores_puerto1 << endl;
	cout << ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_2 << n_contenedores_puerto2 << endl;
	cout << ETIQUETA_CANTIDAD_CONTENEDORES_EN_PUERTO_3 << n_contenedores_puerto3 << endl;

	return 0;
}

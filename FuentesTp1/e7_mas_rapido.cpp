#include <iostream>
#include <cstring>
#define DISTANCIA 1500
#define ETIQUETA_INGRESO_DE_TIEMPO "Ingrese el tiempo: "
#define ETIQUETA_INGRESO_NOMBRE "Indique nombre del competidor: "
#define ETIQUETA_NUMERO_DE_COMPETIDORES "Introduzca la cantidad de competidores: "
#define ETIQUETA_NOMBRE_COMPETIDOR_MAS_RAPIDO "El competidor más rádido es: "
#define ETIQUETA_MAYOR_RAPIDEZ "su rapidez es "
#define LONGITUD_CADENA 30
#define SIMBOLO_DIVISION '/'
#define SIMBOLO_IGUAL '='
#define TIEMPO_NULO 0

using namespace std;

int main (void)
{
	//Si el tiempo estuviera en minuto y segundos, se debe hacer: tiempo = 60 * minutos + segundos
	int n_competidores, distancia, tiempo, menor_tiempo = 0;
	char nombre_competidor[LONGITUD_CADENA+1], nombre_menor_tiempo[LONGITUD_CADENA+1];
	
	cout << ETIQUETA_NUMERO_DE_COMPETIDORES << endl;
	cin >> n_competidores;
	
	for (int i = 0; i < n_competidores ; i++)
	{
		cout << ETIQUETA_INGRESO_NOMBRE << endl;
		cin >> nombre_competidor;
		cout << ETIQUETA_INGRESO_DE_TIEMPO << endl;
		cin >> tiempo;
		
		if (menor_tiempo == TIEMPO_NULO)
		{
			menor_tiempo = tiempo;
			strcpy (nombre_menor_tiempo, nombre_competidor);
		}
		else
		{
			if (tiempo < menor_tiempo)
			{
				menor_tiempo = tiempo;
				strcpy (nombre_menor_tiempo, nombre_competidor);
			}
		}
	}
	
	cout << ETIQUETA_NOMBRE_COMPETIDOR_MAS_RAPIDO << nombre_menor_tiempo << endl;
	cout << ETIQUETA_MAYOR_RAPIDEZ << DISTANCIA << SIMBOLO_DIVISION << menor_tiempo 
	<< SIMBOLO_IGUAL << 1.0*DISTANCIA/menor_tiempo << endl;
	
	return 0;
}

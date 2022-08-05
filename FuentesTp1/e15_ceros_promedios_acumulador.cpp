#include <iostream>
#define MSJ_INGRESO_OPCION "Ingrese una opción(a,b,c,d,e): "
#define MSJ_ERROR_EN_ELEGIR_LA_OPCION "Error, opción invalida."
#define MSJ_INGRESO_N_VALORES "Ingrese 167 valores: "
#define MSJ_INGRESO_N "Ingrese la cantidad de números a introducir: "
#define MSJ_INGRESO_VALORES "Ingrese los valores:"
#define MSJ_INGRESO_VALOR "Ingrese un valor"
#define ETIQUETA_SALIDA_NUMERO_DE_CEROS "La cantidad de incidencias de ceros es "
#define ETIQUETA_SALIDA_PROMEDIO_NUMEROS_POSITIVOS "El promedio de números positivos es "
#define ETIQUETA_SALIDA_SUMA_DE_NUMEROS_NEGATIVOS "La suma de números negativos es "
#define N 5
#define A 'a'
#define B 'b'
#define C 'c'
#define D 'd'
#define E 'e'
#define NULO 0
#define SUPREMO_CEROS 4
#define SUPREMO_PROMEDIO 6



using namespace std;

int main (void)
{
	int valor, valor_anterior, n_ceros = 0, n_positivos = 0, acum_positivos = 0, acum_negativos = 0, n;
	float promedio_positivos;
	char opcion;
	cout << MSJ_INGRESO_OPCION;
	cin >> opcion;
	switch(opcion)
	{
		case A:
			cout << MSJ_INGRESO_N_VALORES << endl;
			for (int i = 0; i < N; i++)
			{
				cin >> valor;
				if(valor == NULO)
					n_ceros++;
				else if (valor > NULO)
				{
					acum_positivos += valor;
					n_positivos++;
				}
				else
					acum_negativos += valor;
			}
			promedio_positivos = 1.0*acum_positivos/n_positivos;
			break;
			
		case B:
			cout << MSJ_INGRESO_N;
			cin >> n;
			cout << MSJ_INGRESO_VALORES << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> valor;
				if(valor == NULO)
					n_ceros++;
				else if (valor > NULO)
				{
					acum_positivos += valor;
					n_positivos++;
				}
				else
					acum_negativos += valor;
			}
			if (n_positivos != NULO)
				promedio_positivos = 1.0*acum_positivos/n_positivos;
			else
				promedio_positivos = NULO;
			break;
			
		case C:
			cout << MSJ_INGRESO_VALOR << endl;
			cin >> valor_anterior;
			if(valor_anterior == NULO)
					n_ceros++;
			else if (valor_anterior > NULO)
			{
				acum_positivos += valor_anterior;
				n_positivos++;
			}
			else
				acum_negativos += valor_anterior;
			
			cout << MSJ_INGRESO_VALOR << endl;
			cin >> valor;
			
			while(valor != valor_anterior)
			{
				if(valor == NULO)
					n_ceros++;
				else if (valor > NULO)
				{
					acum_positivos += valor;
					n_positivos++;
				}
				else
					acum_negativos += valor;
				
				valor_anterior = valor;
				cout << MSJ_INGRESO_VALOR << endl;
				cin >> valor;						
			}
			if(valor == NULO)
				n_ceros++;
			else if (valor > NULO)
			{
				acum_positivos += valor;
				n_positivos++;
			}
			else
				acum_negativos += valor;

			if (n_positivos != NULO)
				promedio_positivos = 1.0*acum_positivos/n_positivos;
			else
				promedio_positivos = NULO;				
			break;
			
		case D:
			cout << MSJ_INGRESO_N;
			cin >> n;
			cout << MSJ_INGRESO_VALORES << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> valor;
				if(valor == NULO)
					n_ceros++;
				else if (valor > NULO)
				{
					acum_positivos += valor;
					n_positivos++;
				}
				else
					acum_negativos += valor;
					
				if (n_ceros > SUPREMO_CEROS)
					break;					
			}
			if (n_positivos != NULO)
				promedio_positivos = 1.0*acum_positivos/n_positivos;
			else
				promedio_positivos = NULO;
			break;
			
		case E:
			cout << MSJ_INGRESO_N;
			cin >> n;
			cout << MSJ_INGRESO_VALORES << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> valor;
				if(valor == NULO)
					n_ceros++;
				else if (valor > NULO)
				{
					acum_positivos += valor;
					n_positivos++;
				}
				else
					acum_negativos += valor;
					
				if ( (n_ceros > SUPREMO_CEROS) || ((1.0*acum_positivos/n_positivos) > SUPREMO_PROMEDIO) )
					break;					
			}
			if (n_positivos != NULO)
				promedio_positivos = 1.0*acum_positivos/n_positivos;
			else
				promedio_positivos = NULO;
			break;
		default:
			cout << MSJ_ERROR_EN_ELEGIR_LA_OPCION << endl;	
	}
	
	cout << ETIQUETA_SALIDA_NUMERO_DE_CEROS << n_ceros << endl;
	cout << ETIQUETA_SALIDA_PROMEDIO_NUMEROS_POSITIVOS << promedio_positivos << endl;
	cout << ETIQUETA_SALIDA_SUMA_DE_NUMEROS_NEGATIVOS << acum_negativos << endl;


	return 0;
}

#include <iostream>
#define MSJ_INGRESO_DE_NUMERO "Ingrese un numero: "
#define ETIQUETA_MAYOR_NUMERO_NEGATIVO "El mayor numero negativo es: "
#define ETIQUETA_MENOR_NUMERO_POSITIVO "El menor numero positivo es: "
#define ETIQUETA_MINIMO_NUMERO_EN_INTERVALO "El mimimo numero en el rango (-17.3,0)U(0,26.9) es: "
#define ETIQUETA_PROMEDIO_DE_NUMEROS "El promedio de los numeros es: "
#define NO_HUBO_NUMEROS_NEGATIVOS "No hubo numeros negativos"
#define NO_HUBO_NUMEROS_POSITIVOS "No hubo numeros positivo"
#define NO_HUBO_NUMEROS_EN_INTERVALO "No hubo ningun valor en el rango (-17.3,0)U(0,26.9)"
#define NO_SE_INGRESO_NUMEROS "No se ingreso ningun numero"
#define NUMERO_FUERA_DEL_RANGO 27
#define INFIMO -17.3
#define SUPREMO 26.9
#define NULO 0
using namespace std;

int main(void)
{
	float numero, promedio, acumulador = NULO, max_negativo = NULO, min_positivo = NULO, min_rango = NUMERO_FUERA_DEL_RANGO;
	int n = NULO;
	
	cout << MSJ_INGRESO_DE_NUMERO;
	cin >> numero;
	
	while (numero != NULO)
	{
		if (numero < NULO)
			if (max_negativo == NULO || numero > max_negativo)
				max_negativo = numero;
		if (numero > NULO)
			if (min_positivo == NULO || numero < min_positivo)
				min_positivo = numero;
				
		if (numero < SUPREMO && numero > INFIMO)
			if (min_rango == NUMERO_FUERA_DEL_RANGO || numero < min_rango)
				min_rango = numero;	
				
		acumulador += numero;
		n++;
		
		cout << MSJ_INGRESO_DE_NUMERO;
		cin >> numero;
	}
	
	if (max_negativo != NULO)
		cout << ETIQUETA_MAYOR_NUMERO_NEGATIVO << max_negativo << endl;
	else 
		cout << NO_HUBO_NUMEROS_NEGATIVOS << endl;
		
	if (min_positivo != NULO)
		cout << ETIQUETA_MENOR_NUMERO_POSITIVO << min_positivo << endl;
	else 
		cout <<  NO_HUBO_NUMEROS_POSITIVOS << endl;
		
	if (min_rango != NUMERO_FUERA_DEL_RANGO)
		cout << ETIQUETA_MINIMO_NUMERO_EN_INTERVALO << min_rango << endl;
	else
		cout << NO_HUBO_NUMEROS_EN_INTERVALO  << endl;
		
	if (n > NULO)
		cout << ETIQUETA_PROMEDIO_DE_NUMEROS << acumulador/n << endl;
	else
		cout << NO_SE_INGRESO_NUMEROS << endl;
	
	return 0;
}

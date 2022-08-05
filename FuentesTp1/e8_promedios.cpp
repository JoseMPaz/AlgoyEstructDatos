#include <iostream>
#define N 50
#define MAXIMO 100
#define MINIMO -10
#define MJS_RESULTADO_PROMEDIO_MAYOR_A_100 "El promedio de numeros mayores a 100 es: "
#define MSJ_RESULTADO_SUMA_MENOR_A_MENOS_10 "La suma de números menores a -10 es: "
#define PROMEDIO_NULO 0
using namespace std;

int main (void)
{
	int valor, acumMayor100 = 0, cantMayor100 = 0, acumMenorMenos10 = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> valor;
		
		if (valor > MAXIMO)
		{
			acumMayor100 += valor;
			cantMayor100++;
		}	
		else if (valor < MINIMO)
			acumMenorMenos10+= valor;
	}
	
	if (cantMayor100 != PROMEDIO_NULO)
		cout << MJS_RESULTADO_PROMEDIO_MAYOR_A_100 << 1.0* acumMayor100/cantMayor100 << endl;
	else
		cout << MJS_RESULTADO_PROMEDIO_MAYOR_A_100 << PROMEDIO_NULO << endl; 
		
	cout << MSJ_RESULTADO_SUMA_MENOR_A_MENOS_10 << acumMenorMenos10 << endl;
	
	return 0;
}

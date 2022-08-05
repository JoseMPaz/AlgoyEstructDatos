/*Realiza suma,resta y producto de 2 numero enteros introducidos por teclado*/
#include <iostream>//Biblioteca de funciones de entrada y salida de flujo de datos
#define ETIQUETA_ENTRADA_DE_DATOS "Ingrese 2 númenos enteros"
#define SIMBOLO_SUMA '+'
#define SIMBOLO_RESTA '-'
#define SIMBOLO_PRODUCTO '*'
#define SIMBOLO_IGUALDAD '='
using namespace std;//Uso del espacio de nombres estandar para no agregar std:: en cin, cout y endl

int main (void)//Funcion principal o en ingles main
{
	int a, b;
	
	cout << ETIQUETA_ENTRADA_DE_DATOS << endl;//Indica que ingresen los datos de entrada
	cin >> a >> b;//Se almacenan en las variable a y b los datos del tecladp
	cout << a << SIMBOLO_SUMA << b << SIMBOLO_IGUALDAD << a+b << endl;//Muestra la suma
	cout << a << SIMBOLO_RESTA << b << SIMBOLO_IGUALDAD << a-b << endl;//Muestra la resta	
	cout << a << SIMBOLO_PRODUCTO << b << SIMBOLO_IGUALDAD << a*b << endl;//Muestra el producto
	
	return 0;//Se devuelve 0 al sistema operativo para indicar que no hubo errores
}

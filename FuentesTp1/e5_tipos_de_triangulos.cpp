#include <iostream>
#define ETIQUETA_PEDIDO_DE_LADOS_DEL_TRIANGULO "Introduzca 3 números enteros para determinar el tipo de triángulo: "
#define ETIQUETA_TRIANGULO_EQUILATERO "Forman un triángulo equilatero"
#define ETIQUETA_TRIANGULO_ISOSCELES "Forman un triángulo isosceles"
#define ETIQUETA_TRIANGULO_ESCALENO "Forman un triángulo escaleno"

using namespace std;

int main (void)
{
	int a, b, c;
	
	cout << ETIQUETA_PEDIDO_DE_LADOS_DEL_TRIANGULO << endl;
	cin >> a >> b >> c;
	
	if ( (a == b) & (b == c))
		cout << ETIQUETA_TRIANGULO_EQUILATERO << endl;
	else if ( (a == b) || (a == c) || (b == c))
		cout << ETIQUETA_TRIANGULO_ISOSCELES << endl;
	else
		cout << ETIQUETA_TRIANGULO_ESCALENO << endl;
	
	return 0;
}

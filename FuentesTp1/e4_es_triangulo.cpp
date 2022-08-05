#include <iostream>
#define ETIQUETA_PEDIDO_DE_LADOS_DEL_TRIANGULO "Introduzca 3 números enteros para determinar si forman un triángulo: "
#define ETIQUETA_SI_ES_TRIANGULO "Si forman un triángulo"
#define ETIQUETA_NO_ES_TRIANGULO "No forman un triángulo"

using namespace std;

int main (void)
{
	int a, b, c;
	
	cout << ETIQUETA_PEDIDO_DE_LADOS_DEL_TRIANGULO << endl;
	cin >> a >> b >> c;
	if ( (a+b>c) && (a+c>b) && (b+c > a) )
		cout <<  ETIQUETA_SI_ES_TRIANGULO << endl;
	else
		cout << ETIQUETA_NO_ES_TRIANGULO << endl;
		
	return 0;
}

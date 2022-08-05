#include <iostream>
#define ETIQUETA_PEDIDO_EDAD "Introduzca su edad "
#define INICIO_EDAD_VALIDA 0
#define EDAD_LIMITE_MENOR 12
#define EDAD_LIMITE_CADETE 18
#define EDAD_LIMITE_JUVENIL 26
#define ETIQUETA_ERROR_DE_EDAD "Error: Su edad tiene que ser positiva"
#define ETIQUETA_MENOR "Menor"
#define ETIQUETA_CADETE "Cadete" 
#define ETIQUETA_JUVENIL "Juvenil" 
#define ETIQUETA_MAYOR "Mayor" 

using namespace std;

int main (void)
{
	int edad;
	
	cout << ETIQUETA_PEDIDO_EDAD << endl;
	cin >> edad;
	
	if (edad <= INICIO_EDAD_VALIDA)
		cerr << ETIQUETA_ERROR_DE_EDAD <<endl;
	else if (edad <= EDAD_LIMITE_MENOR)
		cout << ETIQUETA_MENOR << endl;
	else if (edad <= EDAD_LIMITE_CADETE)
		cout << ETIQUETA_CADETE << endl;
	else if (edad < EDAD_LIMITE_JUVENIL)
		cout << ETIQUETA_JUVENIL << endl;
	else 
		cout << ETIQUETA_MAYOR << endl;

	return 0;
}

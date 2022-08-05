#include <iostream>
#include <stdlib.h>
#define N 100
#define MSJ_INGRESO_TIPO "Ingrese el tipo de infraccion(1,2,3 o 4): "
#define MSJ_INGRESO_MOTIVO "Ingrese el motivo de la infraccion: "
#define MSJ_INGRESO_MONTO "Ingrese el monto de la infraccion(monto > 0): "
#define MSJ_INGRESO_GRAVEDAD "Ingrese gravedad de la infraccion(L,M o G): "
#define MSJ_ERROR_TIPO_INFRACCION "Error, los tipo de infraccion son 1, 2, 3 o 4"
#define MSJ_ERROR_MONTO_INFRACCION "Error, el monto es un numero entero positivo"
#define MSJ_ERROR_GRAVEDAD_INFRACCION "Error, las gravedades de infraccion son L, M o G"
#define TIPO_INFRACCION_1 1
#define TIPO_INFRACCION_2 2
#define TIPO_INFRACCION_3 3
#define TIPO_INFRACCION_4 4
#define TIPO_GRAVEDAD_L 'L'
#define TIPO_GRAVEDAD_M 'M'
#define TIPO_GRAVEDAD_G 'G'
#define CANTIDAD_INFRACCION_CLAUSURA 3
#define ETIQUETA_CLAUSURA_DE_FABRICA "Clausurar frabrica"
#define ETIQUETA_NO_CLAUSURA_DE_FABRICA "No clausudad fabrica"
#define ETIQUETA_SALIDA_MONTO_GRAVEDAD_L "El monto total de las infracciones tipo L son: "
#define ETIQUETA_SALIDA_MONTO_GRAVEDAD_M "El monto total de las infracciones tipo M son: "
#define ETIQUETA_SALIDA_MONTO_GRAVEDAD_G "El monto total de las infracciones tipo G son: "
using namespace std;

int main (void)
{
	unsigned int tipo_infraccion;
	int monto_infraccion, monto_gravedad_l = 0, monto_gravedad_m = 0, monto_gravedad_g = 0, cantidad_infraccion_3o4 = 0;
	char gravedad_infraccion;
	char motivo_infraccion[N+1];
	for (int i = 0; i < 5; i++)
	{
		cout << MSJ_INGRESO_TIPO;
		cin >> tipo_infraccion;
		if (tipo_infraccion != TIPO_INFRACCION_1 && tipo_infraccion != TIPO_INFRACCION_2 &&
			 tipo_infraccion != TIPO_INFRACCION_3 && tipo_infraccion != TIPO_INFRACCION_4	)
		{
			cerr << MSJ_ERROR_TIPO_INFRACCION << endl;	
			break;
		}
		
		cout << MSJ_INGRESO_MOTIVO;
		cin >> motivo_infraccion;

		cout << MSJ_INGRESO_MONTO;
		cin >> monto_infraccion;
		if (monto_infraccion <= 0)
		{
			cerr << MSJ_ERROR_MONTO_INFRACCION << endl;	
			break;
		}

		cout << MSJ_INGRESO_GRAVEDAD;
		cin >> gravedad_infraccion;
		gravedad_infraccion = toupper(gravedad_infraccion);

		if (gravedad_infraccion != TIPO_GRAVEDAD_L && 
			 gravedad_infraccion != TIPO_GRAVEDAD_M &&
			 gravedad_infraccion != TIPO_GRAVEDAD_G)
		{
			cerr << MSJ_ERROR_GRAVEDAD_INFRACCION << endl;	
			break;
		}

		if (gravedad_infraccion == TIPO_GRAVEDAD_L)
			monto_gravedad_l += monto_infraccion;
		if (gravedad_infraccion == TIPO_GRAVEDAD_M)
			monto_gravedad_m += monto_infraccion;
		if (gravedad_infraccion == TIPO_GRAVEDAD_G)
		{
			monto_gravedad_g += monto_infraccion;
			if (tipo_infraccion == TIPO_INFRACCION_3 || tipo_infraccion == 4)
				cantidad_infraccion_3o4++;
		}
	}

	cout << ETIQUETA_SALIDA_MONTO_GRAVEDAD_L << monto_gravedad_l << endl; 
	cout << ETIQUETA_SALIDA_MONTO_GRAVEDAD_M << monto_gravedad_m << endl; 
	cout << ETIQUETA_SALIDA_MONTO_GRAVEDAD_G << monto_gravedad_g << endl; 
	if (cantidad_infraccion_3o4 > CANTIDAD_INFRACCION_CLAUSURA)
		cout << ETIQUETA_CLAUSURA_DE_FABRICA << endl;
	else
		cout << ETIQUETA_NO_CLAUSURA_DE_FABRICA << endl;

	return 0;
}

#include <iostream>
#define ETIQUETA_FECHA_CON_FORMATO "Fecha con formato es " 
#define ETIQUETA_FECHA_SIN_FORMATO "Fecha con formato separado es "
#define ETIQUETA_ANIO "año: "
#define ETIQUETA_MES "mes: "
#define ETIQUETA_DIA "día: "
#define ANCHO_ANIO 10000
#define ANCHO_MES 100
#define ANCHO_DIA 100
#define ANIO_CON_FORMATO 20210504
using namespace std;

int main (void)
{
	int fecha_con_formato = ANIO_CON_FORMATO, anio, mes, dia;
	
	anio = fecha_con_formato / ANCHO_ANIO;
	mes = (fecha_con_formato % ANCHO_ANIO) / ANCHO_MES;
	dia = (fecha_con_formato % ANCHO_ANIO) % ANCHO_DIA;
	cout << ETIQUETA_FECHA_CON_FORMATO << fecha_con_formato << endl;
	cout << ETIQUETA_FECHA_SIN_FORMATO << endl;
	cout << ETIQUETA_ANIO << anio << endl;
	cout << ETIQUETA_MES << mes << endl;
	cout << ETIQUETA_DIA << dia << endl;
	
	return 0;
}

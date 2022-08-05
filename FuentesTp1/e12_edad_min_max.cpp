#include <iostream>
#include <cstring>
#define M 40
#define MSJ_INGRESO_NOMBRE "Indique el nombre: "
#define MSJ_INGRESO_FECHA_NACIMIENTO "Indique la fecha de nacimiento: "
#define MSJ_NO_INGRESO_NOMBRE "No se introdujo ningun nombre"
#define FIN_MAYUSCULA "FIN"
#define FIN_MINUSCULA "fin"
#define MSJ_SALIDA_PERSONA_MENOR_EDAD "El nombre de la persona con menor edad es: "
#define MSJ_SALIDA_PERSONA_MAYOR_EDAD "El nombre de la persona con mayor edad es: "
using namespace std;

int main (void)
{
	char nombre_mayor_edad[M+1], nombre_menor_edad[M+1], nombre[M+1];
	int fecha_minima, fecha_maxima, fecha;
	
	cout << MSJ_INGRESO_NOMBRE << endl;
	cin >> nombre;
	if (!strcmp (nombre,  FIN_MAYUSCULA) || !strcmp (nombre, FIN_MINUSCULA))
	{
		cerr << MSJ_NO_INGRESO_NOMBRE << endl;
		return 1;
	}
	strcpy (nombre_menor_edad, nombre);
	strcpy (nombre_mayor_edad, nombre);
	cout << MSJ_INGRESO_FECHA_NACIMIENTO << endl;
	cin >> fecha;
	fecha_minima = fecha_maxima = fecha;
	
	cout << MSJ_INGRESO_NOMBRE << endl;
	cin >> nombre;

	while ((strcmp (nombre,  FIN_MAYUSCULA) != 0) && (strcmp (nombre, FIN_MINUSCULA) != 0))
	{
		cout << MSJ_INGRESO_FECHA_NACIMIENTO << endl;
		cin >> fecha;
		
		if (fecha < fecha_minima)
		{
			fecha_minima = fecha;
			strcpy (nombre_menor_edad, nombre);
		}
		if (fecha > fecha_maxima)
		{
			fecha_maxima = fecha;
			strcpy (nombre_mayor_edad, nombre);
		}
		cout << MSJ_INGRESO_NOMBRE << endl;
		cin >> nombre;
	}
	
	cout << MSJ_SALIDA_PERSONA_MENOR_EDAD << nombre_menor_edad << endl;
	cout << MSJ_SALIDA_PERSONA_MAYOR_EDAD << nombre_mayor_edad << endl;
	
	return 0;
}

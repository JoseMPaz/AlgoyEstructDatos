#include <iostream>
using namespace std;

int main (void)
{
	int acumulador = 0;
	
	//Declaro la variable i dentro del for para que muera al finalizar el ciclo
	for (int i =2; i <= 10000; i += 2)
		acumulador += i;
	
	cout << acumulador << endl;
	
	return 0;
}

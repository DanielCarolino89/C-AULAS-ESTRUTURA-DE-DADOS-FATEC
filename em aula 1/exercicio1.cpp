/* exercicio : Crie um programa que fa�a o calculo da �rea, perimetro
do ret�ngulo, usando fun��o. Ter� duas fun��es. Os lados dos quadrado s�o 4 e 5.
Retorna o resutado na main*/

#include<cstdlib>
#include<iostream>
#include<locale>
using namespace std;

// cabe�alhos
int calc_area(int ladoA, int ladoB);
int calc_perim(int ladoA, int ladoB);

int calc_area(int ladoA, int ladoB)
{
	int perim;
	perim = 2*ladoA + 2*ladoB;
	return perim;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	int ladoA = 4, ladoB = 5, area, perim;
	
	//chamada fun��es
	area = calc_area(ladoA, ladoB);
	perim = calc_perm(ladoA, ladoB);
	
	cout<< " �rea do quadrado �: " << area << endl;
	cout<< " Per�metro do quadrado �: " << perim << endl;
	
	return 0;
}



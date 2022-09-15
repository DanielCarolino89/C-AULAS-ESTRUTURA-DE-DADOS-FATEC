/* exercicio : Crie um programa que faça o calculo da área, perimetro
do retângulo, usando função. Terá duas funções. Os lados dos quadrado são 4 e 5.
Retorna o resutado na main*/

#include<cstdlib>
#include<iostream>
#include<locale>
using namespace std;

// cabeçalhos
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
	
	//chamada funções
	area = calc_area(ladoA, ladoB);
	perim = calc_perm(ladoA, ladoB);
	
	cout<< " Área do quadrado é: " << area << endl;
	cout<< " Perímetro do quadrado é: " << perim << endl;
	
	return 0;
}



/*
Com base nas funções matemáticas crie um programa que 
utiliza uma função que recebe um numero e retorna o 
quadrado desse valor. Faça duas funçoes uma utilizando
passagem de parametro por valor e outra por referencia. 

*/

#include <iostream>
#include <cmath>
using namespace std;
// Cabeçalho
int quadrado_por_valor(int );
void quadrado_por_referencia(int *);

int quadrado_por_valor(int num1)
{
	int aux;
	num1 = pow(num1,2);
	//cout << num1;
	return num1;
}

void quadrado_por_referencia(int *num1)
{
	int aux;
	*num1 = pow(*num1,2);
}

int main()
{
	int num1 = 5, num2=0, num3 = 0;
	
	num3 = quadrado_por_valor(num1);
	cout << "Num3 passado uma copia: "<< num3 << endl;
	cout <<  "Num1: " << num1 << endl;
	
	quadrado_por_referencia(&num1);
	cout << "Num1 passado o endereço de memoria: " << num1 << endl;
	cout << "Num1: " << num1 << endl;
	
	return 0;
}

/*10) Crie um programa que leia do teclado uma sequ�ncia de 10 n�meros decimais e um n�mero que deseja
buscar. Armazene em um vetor. Depois disso, ordene os n�meros de forma crescente. Por �ltimo, exiba o
vetor e se o n�mero buscado foi encontrado ou n�o. Fa�a todo o exerc�cio usando somente ponteiros.
*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	int vetor[10];
	int *p;
	p=vetor;
	
	for(int i=0;i<10;i++)
	{
		cout<< " digite um numero: ";
		cin>>*p;
	}
	
	cout<< " numero que deseja buscar: "
	
    return 0;
}

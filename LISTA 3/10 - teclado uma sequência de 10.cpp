/*10) Crie um programa que leia do teclado uma sequência de 10 números decimais e um número que deseja
buscar. Armazene em um vetor. Depois disso, ordene os números de forma crescente. Por último, exiba o
vetor e se o número buscado foi encontrado ou não. Faça todo o exercício usando somente ponteiros.
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

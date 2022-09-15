/* Criar um programa que receba do usuário os dados para preencher dois vetores
de inteiros de 5 elementos cada. passar os dois vetores para uma função e calcular
a soma dos vetores com os respectivos indices (1:1,2:2,... 5:5).
A função vai retornar o terceiro vetor para exibir na Main. */

#include<cstdlib>
#include<iostream>
#include<locale>
using namespace std;

//cabeçalho
int *soma_vetores(int,int,int);
int *soma_vetores(int,float);
int *soam_vetores(double,int,float);

//função soma de vetores 
int *soma_vetores(int vetorA[],int vetorB[], int vetorC[])
	{
		for(int i=0; i<5; i++)
		{
		vetorC[i] = vetorA[i] + vetorB[i];
		}
		return vetorC;
	}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetorA[5],vetorB[5],vetorC[5];
	int i=0;
	
	while(i<5)
	{
			cout << " Quais os valores do Vetor A: ";
			cin >> vetorA[i];
			i++;	
	}
	
	while(i<5)
	{
			cout << " Quais os valores do Vetor B: ";
			cin >> vetorB[i];
			i++;	
	}
	
	soma_vetores(vetorA,vetorB,vetorC);
	
	cout << " O vetorC é: ";
	for(int j=0; j<5; j++)
	{
		cout << vetorC[j] << " ";
	}
	
	return 0;
}
	
	

/* Exercícios de Ponteiros
Crie um programa que contenha um vetor de inteiros com tamanho 5. 

Preencha o vetor, usando o ponteiro (faça o ponteiro percorrer o
vetor), com o usuário passando os dados para armazenar no conteúdo deste ponteiro(ou seja no vetor)

e após isso, imprima o dobro de cada valor do vetor. 

Depois imprima o endereço de cada casa do vetor. Utilizar apenas ponteiros.*/


#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int vetor[5];
	int *ponteiro;
	ponteiro=vetor;

	for(int i=0;i<5;i++)
	{ponteiro=&vetor[i];
	cout << " Digite um numero: ";
	cin >> *ponteiro;	
    }
    
    ponteiro=vetor;
    	for(int i=0;i<5;i++)
	{
	cout <<" Dobro do valor: "<< (*ponteiro)*2<<endl;
	ponteiro++;
    }
    
     ponteiro=vetor;
    	for(int i=0;i<5;i++)
	{
	cout <<" Valor do vetor: " <<*ponteiro<<endl;
	ponteiro++;
    }
    
      ponteiro=vetor;
    	for(int i=0;i<5;i++)
	{
		 ponteiro=&vetor[i];
	cout <<" indice: " <<i<<" "<<ponteiro<<endl;
	
	cout<<ponteiro<<endl;
	
	ponteiro++;
    }
	
	return 0;
}

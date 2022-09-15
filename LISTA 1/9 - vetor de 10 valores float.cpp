/* 9)Crie um programa que popule um vetor de 10 valores float, 
passados pelo usuário. Dentro de uma função, sem ordenar, 
procure pelo maior e menor valor e exiba-os na tela. 
A função deve receber esse vetor e retornar 
o maior e menor valor para serem exibidos na tela.  */

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

void MinMax(float vetor[],float menor,float maior)
	{

	menor = vetor[0];
    maior = vetor[0];
    for(int i=1;i<10;i++)
    {
    	if(vetor[i]>maior)
		{
			maior = vetor[i];
			
		}else if(vetor[i]<menor)
		{
			menor = vetor[i];
		}
	}
}

int main()
{
    float vetor[10];
    float maior, menor,v;

    for(int i=0; i<10;i++)
	{
    	cout<<" Digite um valor: ";
    	cin>>vetor[i];
    	
    	menor = vetor[0];
        maior = vetor[0];
    for(int i=1;i<10;i++)
    {
    	if(vetor[i]>maior)
		{
			maior = vetor[i];
			
		}else if(vetor[i]<menor)
		{
			menor = vetor[i];
		}
	}
    }
   
	cout<<menor<<" e "<<maior;
   
    return 0;
}


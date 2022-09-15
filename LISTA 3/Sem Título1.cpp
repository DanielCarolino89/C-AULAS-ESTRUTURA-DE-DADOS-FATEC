/* 1) A delegação francesa de Futsal deseja criar um programa que deva conter 
o nome do atleta, sua posição,idade e altura. 
Crie uma estrutura representando um atleta. 
Escreva um programa que leia os dados de cinco atletas e os 
exiba por ordem de idade, do mais velho para o mais novo.  */

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

struct atleta
	{
		char nome[30]; 
		char posicao[30];
		int idade;
		float altura;
	};
	
int main()
{	
	int i,velho,aux,n=3;
	float alto;
    atleta vetor[5];
	
	for(int i=0;i<3;i++)
	{
		cout<<" Nome do atleta: ";
		cin>>vetor[i].nome;
		
		cout<<" Posicao de jogo: ";
		cin>>vetor[i].posicao;
		
		cout<<" Idade do atleta: ";
		cin>> vetor[i].idade;
		
		cout<<" Altura do atleta: ";
		cin>>vetor[i].altura;

		cout<<"\n";
	}
		
		for(int i=0; i<n; i++)
		{
	    	for(int j=0; j<n-1-i; j++)
	    	{
				if(vetor[j].idade>vetor[j+1].idade)
				{
					aux=vetor[j].idade;
					vetor[j].idade=vetor[j+1].idade;
					vetor[j+1].idade=aux;
				}
	    	}
    	}	
	
    	for(int i=n-1; i>=0; i--)
		{ 
		cout<<"\n========== ATLETA ==========\n";
		cout<<" Nome " << vetor[i].nome << endl;
		cout<<" Posicao " << vetor[i].posicao << endl;
		cout<<" Idade " << vetor[i].idade<< endl;
		cout<<" Altura " << vetor[i].altura << endl;
    	}

    return 0;
}

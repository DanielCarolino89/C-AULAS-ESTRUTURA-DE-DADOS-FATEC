#include <iostream>
#include <locale>
#include <string.h>
#include <stdio.h>

using namespace std;

/* A delegação francesa de Futsal deseja criar um 
programa que deva conter o nome do atleta, sua 
posição, idade e altura. 
Crie uma estrutura representando um atleta.
Agora, escreva um programa que leia os dados de cinco atletas. 
Calcule e exiba os nomes do atleta mais alto e do mais velho */

struct atleta
	{
		char nome[30]; 
		char posicao[30];
		int idade;
		float altura;
	};
	
int main()
{	
	int i,velho;
	float alto;
    atleta vetor[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<" Nome do atleta: ";
		cin>>vetor[i].nome;
		
		cout<<" Posicao de jogo: ";
		cin>>vetor[i].posicao;
		
		cout<<" Idade do atleta: ";
		cin>> vetor[i].idade;
		
		cout<<" Altura do atleta: ";
		cin>>vetor[i].altura;

		cout<<"\n____________________\n";
		}
		
    for(int i=0;i<5;i++)
	{
		if(vetor[i].altura > alto)
		alto=vetor[i].altura;
		
		if(vetor[i].idade > velho)
		velho=vetor[i].idade;
	}
    
    cout<<"Jogador mais velho tem "<< velho <<" idade. "<<endl; 
    cout<<"Jogador mais alto tem "<< alto <<" altura. "<<endl;
	
return 0;
}

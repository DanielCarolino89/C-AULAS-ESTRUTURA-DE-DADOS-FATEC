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
	
		strcpy(vetor[0].nome,"Yuri");
		strcpy(vetor[0].posicao,"Atacante");
		vetor[0].idade=25;
		vetor[0].altura=1.85;

		strcpy(vetor[1].nome,"Roger");
		strcpy(vetor[1].posicao,"Atacante");
		vetor[1].idade=23;
		vetor[1].altura=1.77;

		strcpy(vetor[2].nome,"Paulinho");
		strcpy(vetor[2].posicao,"MeioCampo");
		vetor[2].idade=29;
		vetor[2].altura=1.66;

		strcpy(vetor[3].nome,"Rafael");
		strcpy(vetor[3].posicao,"Zagueiro");
		vetor[3].idade=27;
		vetor[3].altura=1.80;

		strcpy(vetor[4].nome,"Cassio");
		strcpy(vetor[4].posicao,"Goleiro");
		vetor[4].idade=35;
		vetor[4].altura=1.92;
 
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

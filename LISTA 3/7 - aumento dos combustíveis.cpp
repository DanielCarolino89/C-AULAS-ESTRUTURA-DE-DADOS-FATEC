/*7) Em fun��o do aumento dos combust�veis, o setor de vendas da rede Carrefour precisa atualizar os valores
de seus produtos no seu cat�logo de vendas. O presidente ordenou um aumento de 4.78% para todos os itens.
S�o 10 itens no cat�logo. 
Sua tarefa � elaborar um programa que leia o nome e valor atual dos produtos
(dados pelo usu�rio) e armazene em um vetor de struct, e ap�s isso efetue o reajuste do valor dos produtos
armazenando os em outro vetor, preservando o vetor original. 
O reajuste (acesso ao vetor) dever� ser feito utilizando ponteiros. 
Imprima na tela o valor reajustado, usando tamb�m ponteiros.*/

#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>
#include<cstdlib>
#include<string.h>


using namespace std;

	struct produtos
		{
			char nome[15];
			float valor;
		};
		
int main()
{	
    int n=3;
	struct produtos P[n];
	struct produtos *ptr;
	float v;
	ptr=&P[n];

	for(int i=0;i<n;i++)
	{
		cout <<" Nome do produto: ";
		cin >> P[i].nome;
		cout <<" Valor do produto: ";
		cin >> P[i].valor;
	
		cout <<"\n-------------------\n";
	}
	
	cout<<"\n Valor real produtos ####################\n";
		for(int i=0;i<n;i++)
	{
		cout<<" Nome: "<< P[i].nome << " Valor: " << P[i].valor;
		cout<<"\n-------------------\n";
	}
	
	
	cout<<"\n Valor reajustados ######################\n";
		for(int i=0;i<n;i++)
	{
		cout<<" Nome: "<<P[i].nome<<" Valor: ";
		cout<<(*ptr).valor;
		cout<<"\n-------------------\n";
	}
	
    return 0;
}

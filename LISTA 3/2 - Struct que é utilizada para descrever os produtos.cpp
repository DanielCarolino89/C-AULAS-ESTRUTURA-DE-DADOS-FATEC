/* 2) Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja :
struct Produto 
{
char nome[30]; // Nome do produto //
int *codigo; // Codigo do produto //
double *preco; // Preco do produto //
char fornecedor[50] // Fornecedor do produto//
};
Faça um programa que armazene 5 produtos e 
exiba-os na tela. Obs: fique atento, porque código e preço são ponteiros dentro de struct.  */

#include<iostream>
#include<string.h>
#include <cstring>
using namespace std;

	struct Produto 
	{
		char nome[30]; /* Nome do produto */
		int *codigo; /* Codigo do produto */
		double *preco; /* Preco do produto */
		char fornecedor[50]; /* Fornecedor do produto*/
	};


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	Produto P[3];
	double *ponteiro1;
	double *ponteiro2;
		ponteiro1 =P;
		ponteiro2=P;
	
	for(int i=0;i<3;i++)
	{		
	    ponteiro1=&P[i].codigo;
		ponteiro2=&P[i].preco;
	
		
		cout<<"\n______________________________\n";
		
		cout<<" Nome do produto: ";
		cin>>P[i].nome;
		cout<<" Código do produto: ";
		cin>>*ponteiro1;
		cout<<" Preço: ";
		cin>>*ponteiro2;
		cout<<" Fornecedor: ";
		cin>>P[i].fornecedor;
	}
		ponteiro1=P;
		ponteiro2=P;
		for(int i=0;i<3;i++)
	{	
		cout<<" Nome do produto: "<<P[i].nome<<endl;
		cout<<" Código do produto: "<<P[i].codigo<<endl;
		cout<<" Preço: "<<P[i].preco<<endl;
		cout<<" Fornecedor: "<<P[i].fornecedor<<endl;
    }
    return 0;
}

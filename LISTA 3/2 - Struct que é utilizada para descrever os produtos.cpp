/* 2) Seja a seguinte struct que � utilizada para descrever os produtos que est�o no estoque de uma loja :
struct Produto 
{
char nome[30]; // Nome do produto //
int *codigo; // Codigo do produto //
double *preco; // Preco do produto //
char fornecedor[50] // Fornecedor do produto//
};
Fa�a um programa que armazene 5 produtos e 
exiba-os na tela. Obs: fique atento, porque c�digo e pre�o s�o ponteiros dentro de struct.  */

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
		cout<<" C�digo do produto: ";
		cin>>*ponteiro1;
		cout<<" Pre�o: ";
		cin>>*ponteiro2;
		cout<<" Fornecedor: ";
		cin>>P[i].fornecedor;
	}
		ponteiro1=P;
		ponteiro2=P;
		for(int i=0;i<3;i++)
	{	
		cout<<" Nome do produto: "<<P[i].nome<<endl;
		cout<<" C�digo do produto: "<<P[i].codigo<<endl;
		cout<<" Pre�o: "<<P[i].preco<<endl;
		cout<<" Fornecedor: "<<P[i].fornecedor<<endl;
    }
    return 0;
}

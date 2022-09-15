/*Exercício 1: 
  Criar uma struc funcionario: nome, cargo e salario(ponteiro).
  Cuidado: salario é ponteiro.
  Popular o vetor de struct com 3 funcionarios, utilizando ponteiro.
  Dica: para armazenar os salários dos funcionários precisa utilizar vetor.
  Exiba os funcionários na tela, utilizando ponteiro.*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

	struct funcionario 
	{
		char nome[30];
		char cargo[30];
		float *salario;
	};

int main()
{
	float renda[3];
	struct funcionario f[3];
		
	for(int i=0;i<3;i++)
	{
		cout<<" Nome: ";
		cin>>f[i].nome;
		cout<<" Cargo: ";
		cin>>f[i].cargo;
		cout<<" Salario: ";
		f[i].salario = &renda[i];		
		cin>>*(f[i].salario);
		cout<<"\n======================\n";
	}
	
		for(int i=0;i<3;i++)
	{
		cout<<"\n Nome: "<<f[i].nome<<" Cargo: "<<f[i].cargo<<" Salario: "<<*(f[i].salario)<<endl;
	}

    return 0;
}

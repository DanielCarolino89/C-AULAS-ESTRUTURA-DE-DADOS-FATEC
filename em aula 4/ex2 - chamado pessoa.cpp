/*Exercício 2:
Elabore um programa que crie um novo tipo chamado pessoa, 
com os campos nome, sexo e ponteiro para idade. 
Leia do usuário o tamanho de um vetor de pessoas e faça esse tamanho 
ser para todos os vetores. 
Em seguida, faça a alocação dinâmica desse vetor de struct, usando malloc, 
calloc e realloc, mas com ponteiros diferentes, ou seja, serão criados 3 vetores. 
Em seguida preencha cada campo de cada vetor de pessoa e exiba os dados na tela.*/

#include<iostream>
#include<cstdlib>
#include<string.h>
#include <cstring>
using namespace std;

	struct Pessoa
	{
		char nome[30];
		char sexo[10];
		int *idade;
	};

int main()
{
	int num=0;
	struct Pessoa *pessoa1=NULL, *pessoa2=NULL, *pessoa3=NULL;
	
	
	cout<< " vetor de pessoas de que tamanho? "<<endl;
	cin>>num;
	
	pessoa1 = (Pessoa*)malloc(num*sizeof(Pessoa)); 
	pessoa2 = (Pessoa*)calloc(num,sizeof(Pessoa));
	pessoa3 = (Pessoa*)realloc(pessoa2,num*sizeof(Pessoa));
	
	for(int i=0;i<num;i++)
	{
		cout<<" Qual o nome da pessoa: "<< endl;
		cin>>pessoa1[i].nome;
		cout<<" Qual o sexo da pessoa: "<< endl;
		cin>>pessoa1[i].sexo;
		pessoa1[i].idade = (int*)malloc(1*sizeof(int));
		cout<<" Qual idade da pessoa: "<< endl;
		cin>>*(pessoa1[i].idade);
	}

    return 0;
}

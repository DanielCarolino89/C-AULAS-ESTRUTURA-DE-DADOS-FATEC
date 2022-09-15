/*4) Considere o seguinte código:
char* nome1 = "Luis";
char* nome2 = "Fernando";
char* nome3 = "Vitoria";
char* nome4 = "Leticia";
Use strcat para concatenar os nomes.
Crie a função: void exibir (char arr, int tamanho);
Escreva o conteúdo da função exibir, sabendo que ela deve percorrer o array de
nomes e printar o array inteiro utilizando ponteiro.*/

#include<iostream>
#include<string.h>
#include <cstring>
#include <stdio.h>


using namespace std;

	void exibir (char arr, int tamanho);

	 struct nomes
	 {
		char* nome1 = "Luis";
		char* nome2 = "Fernando";
		char* nome3 = "Vitoria";
		char* nome4 = "Leticia";
	};

	int main()
	{
		struct nomes n[4];
		struct nomes *p;
		p=&n[4];
		
		for(int i=0;i<0;i++)
		{
		
		exibir;
		exibir(*p,n[i]);
		}

	
	
  return 0;
}

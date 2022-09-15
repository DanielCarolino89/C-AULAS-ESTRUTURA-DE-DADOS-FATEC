#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	/* MALLOC 
	- aloca na mem�ria e retorna um ponteiro void* para o primeiro byte alocado
	- se n�o houver mem�ria suficiente para a aloca��o, um ponteiro nulo � devolvido
	*/
	int *p = NULL, tam=10;
	p = (int*) malloc(tam * sizeof(int));	
	
	//testar sem o retorno do malloc
	cout << "Usando MALLOC: " << endl;
	if (p == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else 
	{
		int i;
		for (i=0; i<tam; i++) 
		{
			//cout << "Informe um valor: " << endl;
			cout << p[i] << endl;
		}
	}
	
	cout << endl << endl << endl << endl;
	
	/* CALLOC 
	- Retorna um ponteiro void* para o primeiro byte alocado.
	- Se n�o houver mem�ria suficiente para a aloca��o, um ponteiro nulo � devolvido.
	- Inicializa o vetor com valores zero, para garantir que n�o tem lixo na mem�ria.
	- Para grandes aloca��es � melhor usar o MALLOC
	*/
	int *vet = NULL;
	float *m;
	vet = (int*) calloc(tam, sizeof(int));
	
	//testar sem o retorno do calloc
	
	cout << endl << "Usando CALLOC: " << endl;
	if (vet == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else
	{
		int i;
		for(i=0; i<tam;i++)
			cout << vet[i] << endl;
	}
	
	
	cout << endl << endl << endl << endl;
	
	
	/*REALLOC
	- o conte�do do bloco antigo � copiado no novo bloco, e NENHUMA informa��o � perdida;
	- expande ou encurta mem�ria pr�-existente (feita por malloc ou calloc antes).
	- depois de copiar os dados antigos no vetor novo, o realloc d� free no vetor(ponteiro) antigo 
	- se n�o houver mem�ria suficiente para a aloca��o, um ponteiro nulo � devolvido
	*/
	int *vet2, *vet3;
	vet2 = (int *)realloc(vet, 20 * sizeof(int));
	cout << endl << "Usando REALLOC: " << endl;
	cout << "Dobrando o tamanho do vetor" << endl;
	if (vet == NULL) 
	{
		cout << "Erro: Memoria insuficiente!" << endl;
		return 0;
	}
	else 
	{
		int i;
		for (i=0; i<20; i++) 
		{
			cout << "Valor na posicao " << i << " � " << vet2[i] << endl;
		}		
	}
	
	
	cout << endl << "Vetor original: " << endl;
	int i;
	for (i=0; i<10; i++) 
	{
		cout << "Valor na posicao " << i <<  " � " << vet[i] << endl;
	}
	
	/* A mem�ria alocada dinamicamente N�O � liberada automaticamente pelo programa, 
	mesmo ap�s este ser encerrado. Assim, o sistema operacional n�o tomar� conhecimento 
	de que aquela �rea de mem�ria est� novamente dispon�vel para uso.	
	*/
	free(p);
	free(vet);
	free(vet2);
	
}

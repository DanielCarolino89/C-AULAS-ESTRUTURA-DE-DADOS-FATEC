#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	/* MALLOC 
	- aloca na memória e retorna um ponteiro void* para o primeiro byte alocado
	- se não houver memória suficiente para a alocação, um ponteiro nulo é devolvido
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
	- Se não houver memória suficiente para a alocação, um ponteiro nulo é devolvido.
	- Inicializa o vetor com valores zero, para garantir que não tem lixo na memória.
	- Para grandes alocações é melhor usar o MALLOC
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
	- o conteúdo do bloco antigo é copiado no novo bloco, e NENHUMA informação é perdida;
	- expande ou encurta memória pré-existente (feita por malloc ou calloc antes).
	- depois de copiar os dados antigos no vetor novo, o realloc dá free no vetor(ponteiro) antigo 
	- se não houver memória suficiente para a alocação, um ponteiro nulo é devolvido
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
			cout << "Valor na posicao " << i << " é " << vet2[i] << endl;
		}		
	}
	
	
	cout << endl << "Vetor original: " << endl;
	int i;
	for (i=0; i<10; i++) 
	{
		cout << "Valor na posicao " << i <<  " é " << vet[i] << endl;
	}
	
	/* A memória alocada dinamicamente NÃO é liberada automaticamente pelo programa, 
	mesmo após este ser encerrado. Assim, o sistema operacional não tomará conhecimento 
	de que aquela área de memória está novamente disponível para uso.	
	*/
	free(p);
	free(vet);
	free(vet2);
	
}

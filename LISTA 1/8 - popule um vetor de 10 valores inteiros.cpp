/* 8)Crie um programa que popule um vetor de 10 valores inteiros, 
passados pelo usuário. Depois disso, pergunte ao usuário se ele quer
ordenar de forma crescente ou decrescente. Pesquise o bubble sort na internet. 
Dependendo da resposta do usuário, crie um segundo vetor para armazenar os valores 
ordenados de forma crescente ou decrescente. As partes de ordenar de forma crescente ou decrescente 
devem ser feitas em duas funções separadas. A função deve retornar o vetor para ser exibido na main. */

#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int n)
{
	int aux;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(vetor[j]>vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
}

int main() 
{
	int vetor[10],n=0,opcao;
	
	for(int i=0;i<10;i++){
		n++;
		cout<<" "<<n<<" Digite um numero: ";
		cin>>vetor[i];

	}
		cout << "\n Voce quer ordenar de forma?"<<endl;
		cout << " 1-crescente"<<endl;
		cout << " 2-decrescente"<<endl;
		cin >> opcao;
		
	if(opcao == 1)
	{
		for(int i=0; i<n; i++)
		    {
			bubbleSort(vetor,n);
			cout<<" "<<vetor[i];
			}
	}
	else if(opcao == 2)
	{
		 for(int i=n-1; i>=0; i--)
			{   
			bubbleSort(vetor,n);
			cout<<" "<<vetor[i];
			}
	}
	return 0; 
}


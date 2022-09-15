/*8) Crie um programa que leia 9 valores inteiros do usuário. Esses valores devem ser variados, podendo ser
repetidos.
a) Use ponteiro para popular o vetor.
b) Ordene o vetor de forma crescente (use bubble sort)
c) Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
d) Exiba cada elemento do vetor e da matriz, usando ponteiro.
*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

void bubbleSort(int vetor[], int n);

int main()
{
	int n=9;
	int *ptr=NULL,*ptr2=NULL;
	int vetor[n];
	ptr=&vetor[0];
	int matriz[3][3];
	ptr2=&matriz[3][3];
	
	for(int i=0;i<n;i++)
	{   
		*(ptr+=1);
		cout<<" Digite um numero: ";
		cin>>*ptr;
	}
	
	cout<<"\n Bubble sort ##########\n";
	
	for(int i=0; i<n; i++)
		    {
			bubbleSort(vetor,n);
			cout<<" "<<vetor[i];
			}
	
	cout<<"\n Matriz ###############\n";
	
		for(int i=0;i<n;i++)
	{  
			cout<<matriz[i][vetor[i]]<<"|";
	}
		
    return 0;
}

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

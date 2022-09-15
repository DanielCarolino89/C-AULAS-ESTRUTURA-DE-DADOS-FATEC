/* 3)Fazer um programa que lê um conjunto de 10 valores inteiros
e verifica se algum dos valores é igual a média dos mesmos.  */

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int vetor[10],soma,media,n,i=0;
	
        for(int i=0; i<10; i++)
        {
        n++;
        cout<< "\n Digite o valor numero "<<n<<" : " ;
        cin >> vetor[i];
        }
        soma = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5] + vetor[6] + vetor[7] + vetor[8] + vetor[9];
        media = soma / 10;

         if(vetor[i] == media)
         {
             cout<<"\n Possui media igual \n";
         }
         else
         {
             cout<<"\n Nao possui media igual \n";
         }
	return 0;
}


/* 2)Os pre�os dos produtos de uma loja ser�o atualizados por conta da infla��o
que aumentou 15%. Crie um programa que vai popular o vetor de 10 unidades de double
e depois vai atualizar os pre�os de acordo com a infla��o.
Depois disso, exibir o valor na tela.   */

#include<iostream>
using namespace std;

int main()
{
	double vetor[10], ipca;
	int i,n=0,j=0;

        for(int i=0; i<10; i++)
        {
            j++;
           cout<< " Digite o valor do produto "<<j<<" : " ;
           cin >> vetor[i];
        }
        for(int i=0; i<10; i++)
            {
               n++;
               cout<<"\n";
               ipca = vetor[i] + (vetor[i]*0.15);
               cout << " Valor do produto "<<n<<" com inflacao: " << ipca;
            }

	return 0;
}

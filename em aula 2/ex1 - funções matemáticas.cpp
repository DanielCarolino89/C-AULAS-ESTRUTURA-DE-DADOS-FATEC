/*
Fun��o 					    Descri��o do comando
floor( ) 					arredonda para baixo
ceil( ) 					arredonda para cima
sqrt( ) 					Calcula raiz quadrada
pow(vari�vel, expoente) 	potencia��o

Com base nas fun��es matem�ticas crie um programa que 
utiliza uma fun��o que recebe um numero e retorna o 
quadrado desse valor. 
Fa�a duas fun�oes uma utilizando
passagem de parametro por valor e outra por referencia. 
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;


int funcao_valor(int n)
	{
		int aux;
		aux = pow(n,4);
		cout<<aux;
		return aux;
	}
	
void funcao_referencia(int *n)
	{
		int aux;
		aux = pow(*n,4);
	}
	
int main()
{
	int n,respV=0,aux;
	
	cout << "\n Digite um numero: ";
	cin >> n;
	
	respV = funcao_valor(n);
	cout<<"\n funcao por valor: "<< respV;
	
	funcao_referencia(&n);
	cout<<"\n funcao por referencia: "<< n;
	
	return 0;
}

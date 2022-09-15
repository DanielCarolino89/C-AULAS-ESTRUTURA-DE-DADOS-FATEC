/* 7)Criar uma função que retorna o seguinte: 
A função recebe 4 valores do tipo int e 
retornar o triplo do 1º + o quadrado dos outros dois. 
Vai retornar o tipo float, ou seja, tem que fazer um cast do valor 
(procurar cast de int para float na internet).  */

#include <iostream>
#include <math.h>

using namespace std;

int funcao(int a,int b,int c, int d)
{
	int s=b+c+d;
	return ((a*3)+(s*4));
}

int main() 
{
	float vetor[5];
	int a,b,c,d;
	
	cout<<" Digite um numero: ";
	cin>>a;
	
	cout<<" Digite um numero: ";
	cin>>b;
	
	cout<<" Digite um numero: ";
	cin>>c;
	
	cout<<" Digite um numero: ";
	cin>>d;
	
	for(int i=0;i<6;i++){
		vetor[i]=funcao(a,b,c,d);
		cout <<" valor do calculo: "<< vetor[i];
		break;
	}	

	return 0; 
}



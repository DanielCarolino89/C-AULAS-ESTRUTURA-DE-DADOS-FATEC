/*6)Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. 
A fun��o deve receber esse termo e retornar o valor desse termo ap�s a s�rie de Fibonacci. 
A s�rie � formada pela sequ�ncia: 1,1,2,3,5,8,13,21,34,....,etc. */

#include <iostream>

using namespace std;

int main() 
{
	int num,f1,f2,f3,cont,i=0;

	cout << " Fibonacci ate o decimo quinto termo \n";

	f1= -1;
	f2= 1;
	cont= 1;
	int vetor[16];


while (cont < 15)
{
	for(int i=0;i<16;i++)
	vetor[i]= f1 + f2;
	f1= f2;
	f2= vetor[i];
	cout  <<" "<<vetor[i] <<" ";
	cont= cont + 1;
}
    cout<< "\n o decimo quinto termo e: "<< vetor[15];

	return 0; 
}


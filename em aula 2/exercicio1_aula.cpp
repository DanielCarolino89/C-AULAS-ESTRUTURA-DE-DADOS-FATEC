/*
Fun��o 					Descri��o do comando
floor( ) 					arredonda para baixo
ceil( ) 					arredonda para cima
sqrt( ) 					Calcula raiz quadrada
pow(vari�vel, expoente) 	potencia��o

Com base nas fun��es matem�ticas crie um programa que 
utiliza uma fun��o que recebe um numero e retorna o 
quadrado desse valor. Fa�a duas fun�oes uma utilizando
passagem de parametro por valor e outra por referencia. 
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
	float x = 5.85, arr_pb, arr_pc, rq, pot;
	
	arr_pb = arr_pc = rq = pot = 0;
	
	arr_pb = floor(x);
	arr_pc = ceil(x);	
	rq = sqrt(x);
	pot = pow(x,2); //elevando o valor de x ao quadrado
	
	
	
	cout << arr_pb << endl;
	cout << arr_pc;
	
	
	return 0;
}

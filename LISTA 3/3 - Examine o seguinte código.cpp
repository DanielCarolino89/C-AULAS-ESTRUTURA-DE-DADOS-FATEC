/*3) Examine o seguinte c�digo: 
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;
a) O c�digo compila?
b) Ap�s executar o c�digo, qual ser� o valor de inx?
c) Ap�s executar o c�digo, para onde parr estar� apontando?*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	
	cout<<inx<<endl;
	cout<<*parr<<endl;
	
/*	a) O c�digo compila? 
	RESPOSTA: SIM.
    b) Ap�s executar o c�digo, qual ser� o valor de inx?
    RESPOSTA: 20.
    c) Ap�s executar o c�digo, para onde parr estar� apontando?
	RESPOSTA: 20. */


    return 0;
}

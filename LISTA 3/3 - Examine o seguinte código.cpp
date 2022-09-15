/*3) Examine o seguinte código: 
int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;
a) O código compila?
b) Após executar o código, qual será o valor de inx?
c) Após executar o código, para onde parr estará apontando?*/

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
	
/*	a) O código compila? 
	RESPOSTA: SIM.
    b) Após executar o código, qual será o valor de inx?
    RESPOSTA: 20.
    c) Após executar o código, para onde parr estará apontando?
	RESPOSTA: 20. */


    return 0;
}

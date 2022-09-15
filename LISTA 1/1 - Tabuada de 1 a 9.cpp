/* 1)Fazer um programa que imprime,
em formato de tabela, a tabuada de 1 a 9. 
Use "\n" e "\t" para te ajudar na exposição dos números na tela.   */

#include<iostream>
using namespace std;

int main ()
{
    int i,j;
    int matriz [10][10];

		for ( i=1; i<10; i++ )
        {
            cout << "\n______ Tabuada do " << i << " _____\n";

        for ( j=1; j<10; j++ )
        {
            matriz[i][j] = i * j;
            cout<< "\n \t" << i << " x " << j << " = " << matriz[i][j] <<"\n";
		}
		}
	return 0;
}

#include <iostream>
#include <locale>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct pessoa
	{
		int idade;
		char nome[30]; 
		char sobrenome[30];
	};
	
int main()
{ 

    struct pessoa p1 {
    	25,"paulo","albuquerque"
	};

    cout<< p1.nome ;
	
return 0;
}

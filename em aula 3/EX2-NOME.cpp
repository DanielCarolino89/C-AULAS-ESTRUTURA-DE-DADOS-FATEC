#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;

	struct pessoa{
		char nome[30];
		char sobrenome[30];
		int *idade=NULL;
	};
	
int main()
{
	setlocale (LC_ALL, "Portuguese");
	
	pessoa p1,p2;
	int j;
	p1.idade = &j;
	*p1->idade = 5;
	
	cout<< *p1.idade;
	
	
return 0;	
}


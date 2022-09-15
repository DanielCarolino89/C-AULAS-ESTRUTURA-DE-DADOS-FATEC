/* 5)Procure a respeito das seguintes funções de manipulação de string:  strcpy, strcmp, strcat, strlen 
e faça a programa a seguir utilizando essas funções: usuário vai passar nome e sobrenome para o programa 
(apenas duas palavras), que vai fazer as seguintes verificações: se nome for maior que sobrenome (usar strcmp) 
então imprimir concatenados o nome e depois o sobrenome. Caso contrário imprimir na tela o sobrenome e depois o nome. 
E se forem iguais colocar em uma terceira variável o nome e depois o sobrenome e exibir na tela também o tamanho 
(número de caracteres) da string total (nome completo do usuário).*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	char nome[15];
	char sobrenome[15];
	int retorno,valor;
	
	cout << "Digite um nome: " << endl;
    cin.getline(nome,15);
    
    cout << "Digite um sobrenome: " << endl;
    cin.getline(sobrenome,15);
		
	retorno = strcmp(nome,sobrenome);
	
	if(retorno == 1)
	{
		cout<<sobrenome<<" "<<nome<<" (1)";
		return 1;
	}
	else if(retorno == -1)
	{
		cout<<nome<<" "<<sobrenome<<" (-1)";
		return -1;
	}
	else(retorno == 0);
	    valor = strlen(nome)+strlen(sobrenome);
		cout<<nome<<" "<<sobrenome<<" sao "<<valor<<" caracteres"<<" (0)";
		return 0;
		
	return 0;
}



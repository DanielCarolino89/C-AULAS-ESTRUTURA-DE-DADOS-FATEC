/*6) A Microsoft est� contratando funcion�rios para realizarem testes no gerenciador de mem�ria do seu novo
computador. 

Seu programa dever� ler 5 n�meros inteiros, 5 n�meros decimais, 5 letras, 

armazen�-las em uma �nica struct contendo vetor de inteiro, vetor de decimais e vetor de char.
 
Ent�o, atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros pelo n�mero 100, 
os decimais por 1.99, e as letras por �W�.

Depois da substitui��o, o programa dever� exibir o valor das vari�veis j� devidamente atualizadas.*/

#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>

using namespace std;

	struct gmem
	{
		int inteiros[5]={2,3,4,5,7};
		float decimais[5]={2.44,1.55,9.11,3.44,7.50};
		char letras[5]={'h','o','n','p','t'};
	};

int main()
{
	struct gmem G;
	struct gmem *p = NULL;
	
	p=&G;
	
	cout<<"\n# VALOR REAL ########################\n";
	for(int i=0;i<5;i++){
	
 		cout<<" Inteiros "<<(*p).inteiros[i]<<" Decimais "<<(*p).decimais[i]<<" Letras "<<(*p).letras[i]<<endl;
		 
}
	cout<<"\n# VALOR ALTERADO ####################\n";

	for(int i=0;i<5;i++){
	(*p).inteiros[i] = 100;
	(*p).decimais[i]= 1.99;
    (*p).letras[i]='W';
   
}
    for(int i=0;i<5;i++){

 		cout<<" Inteiros "<<(*p).inteiros[i]<<" Decimais "<<(*p).decimais[i]<<" Letras "<<(*p).letras[i]<<endl;
		
}
    return 0;
}

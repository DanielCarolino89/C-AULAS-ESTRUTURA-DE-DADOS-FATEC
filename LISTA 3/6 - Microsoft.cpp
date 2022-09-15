/*6) A Microsoft está contratando funcionários para realizarem testes no gerenciador de memória do seu novo
computador. 

Seu programa deverá ler 5 números inteiros, 5 números decimais, 5 letras, 

armazená-las em uma única struct contendo vetor de inteiro, vetor de decimais e vetor de char.
 
Então, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 100, 
os decimais por 1.99, e as letras por ’W’.

Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizadas.*/

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

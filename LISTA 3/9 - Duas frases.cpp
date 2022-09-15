/*9) Crie um programa que leia do teclado duas frases.
a) Através de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para
percorrer o array de char).
b) Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda frase numa
terceira variável e compare as duas frases usando strcmp. Faça essa parte usando uma função que
recebe como parâmetro as duas frases e retorne o tamanho da maior frase.
*/

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
	int n=1000;
	char frase1[60];
	char frase2[60];
	char *ptr1,*ptr2;
	ptr1=&frase1[60];
	ptr2=&frase2[60];
	
	strcpy(ptr1,"A persistência é o caminho do êxito. e");
	strcpy(ptr2,"No meio da dificuldade encontra-se a oportunidade.");
	strcat(ptr1,ptr2);
	
	puts(ptr1);
	puts(ptr2);
    return 0;
}

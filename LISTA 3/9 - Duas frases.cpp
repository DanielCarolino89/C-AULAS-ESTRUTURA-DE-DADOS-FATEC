/*9) Crie um programa que leia do teclado duas frases.
a) Atrav�s de ponteiro, determine quantas letras tem a primeira frase (ou seja, use o ponteiro para
percorrer o array de char).
b) Verifique o tamanho dessa segunda frase (usando strlen), use strcpy para copiar a segunda frase numa
terceira vari�vel e compare as duas frases usando strcmp. Fa�a essa parte usando uma fun��o que
recebe como par�metro as duas frases e retorne o tamanho da maior frase.
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
	
	strcpy(ptr1,"A persist�ncia � o caminho do �xito. e");
	strcpy(ptr2,"No meio da dificuldade encontra-se a oportunidade.");
	strcat(ptr1,ptr2);
	
	puts(ptr1);
	puts(ptr2);
    return 0;
}

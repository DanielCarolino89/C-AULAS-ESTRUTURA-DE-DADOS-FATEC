#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	/*
	Com relação a ponteiros, a declaração é feita de um jeito e o uso é feito de outro jeito. 
	Um ponteiro pode apontar para um int, para um float ou vetor, dependendo do tipo que foi declarado.
	*/
	int vetor[10]; /* Vetor de Inteiros: vetor == &(vetor[0]) */
	int dado = 5;
	float m ='a';
	int *ptr = NULL; // declaração de ponteiro e definição 
	int *ptr2 = NULL;
	float *ptr3 = NULL;
	float *ptr4[10][10];
	void *pv = NULL;
	ptr = ptr2;
	//ptr = ptr4;
	
	
	
	// Vamos percorrer o vetor
	int vetorA[5];
	cout << &vetorA[0] << endl;
	cout << &vetorA[1] << endl;
	cout << &vetorA[2] << endl;
	cout << &vetorA[3] << endl;
	cout << &vetorA[4] << endl;
	
	cout << "Percorrendo o vetor" << endl;
	for(int i=0; i<5; i++)
	{
		cout << &vetorA[i] << endl;
	}
	
	cout << endl << "1. Ponteiro ptr aponta para o endereço da variável dado" << endl;
	ptr = &dado; /* Ponteiro ptr aponta para o endereço da variável dado */
	//ptr = dado; causa erro de conversão de tipos
	// ptr = m; causa erro de conversão de tipos. Ponteiro de int tem que apontar para endereço de int
	cout << ptr << endl; // exibe o endereço que o ponteiro aponta
	
	
	
	
	
	
	
	
	
	cout << endl << "2. O conteúdo do ponteiro (*ptr) armazena o valor 130" << endl;
	*ptr = 130; /* o conteúdo do ponteiro (ptr) armazena o valor 130 */
	cout << *ptr << endl; // exibe o conteúdo que foi armazenado no endereço que ponteiro apontava
	cout << dado << endl;




	




	cout << endl << "3. Ponteiro pv (void, genérico) aponta para o endereço da variável dado (int)" << endl;
	pv = &dado; /* Ponteiro pv aponta para o endereço da variável dado */
	//pv = m;  causa erro de conversão de tipos
	cout << pv << endl;
	cout << &dado << endl; // para confirmar se o ponteiro está apontando para o lugar certo

	
	
	
	
	
	
	

	cout << endl << "4. Ponteiro ptr aponta para o endereço inicial do vetor de inteiros" << endl;
	ptr = vetor; /* Ponteiro ptr aponta para o endereço INICIAL do vetor de inteiros. 
					O nome de um array já é um ponteiro para o seu primeiro elemento (vetor[0]) */
	*ptr = 2;
	vetor[1] = 100;
	cout << ptr << endl;
	cout << &vetor << endl; // está passando o endereço da primeira casa do vetor (vetor == &vetor == &vetor[0])
	cout << vetor << endl; // está passando o endereço da primeira casa do vetor
	cout << &vetor[0] << endl; // está passando o endereço da primeira casa do vetor
	cout << vetor[0] << endl;
	cout << ptr[1];
	
	
	
	
	
	
	
	
	cout << endl << "5. Ponterio ptr e vetor apontam para o mesmo endereço de memória " << endl;
	vetor[2] = 130;
	ptr = &vetor[2]; // Ponteiro ptr aponta para o endereço do 3 indice do vetor 
	cout << *ptr << endl; // exibe o conteúdo do ponteiro
	cout << vetor[2] << endl; // exibe o conteúdo da 3 casa do vetor
	
	
	
	
	
	
	
	
	
	cout << endl << "6. Ponteiro ptr apontando para o mesmo endereço do ponteiro ptr2" << endl;
	vetor[6] = 55;
	ptr2 = &vetor[6]; // Ponteiro ptr2 aponta para o endereço do indice 6 do vetor
	ptr = ptr2;		// Ponteiro ptr aponta para o mesmo lugar que o ponteiro ptr2 aponta
	cout << ptr << endl;
	cout << ptr2 << endl;
	cout << *ptr << endl;	// se apontam para o mesmo lugar de memória então tem o mesmo conteúdo
	cout << *ptr2 << endl;	// se apontam para o mesmo lugar de memória então tem o mesmo conteúdo
	
	
	
	
	
	
	
	
	
	cout << endl << "7. Adicinando um inteiro ao ponteiro(avançando o ponteiro no vetor):" << endl;
	ptr = &vetor[6];
	//++ptr;
	ptr = ptr + 1;	// ponteiro ptr avança uma casa no vetor(ptr++ , ou pode regridir uma casa ptr--)
	*ptr = 22; // ou seja coloca 22 na posição vetor[7]
	cout << ptr << endl;	// mostra o endereço do ponteiro ptr
	cout << &vetor[7] << endl;	// confirma onde aponta o ponteiro ptr
	cout << vetor[7] << endl;
	cout << &vetor[6] << endl;
	
	
	
	
	
	
	
	
	
	cout << endl << "8. Adicinando inteiro ao conteúdo" << endl;
	*(ptr+2) = 10 ; // coloca o valor 10, 2 casas depois do ponteiro. CUIDADO: ponteiro NÃO anda assim.
	cout << "Valor posição 7: " << vetor[7] << " com endereço: " << &vetor[7] << endl; // conteúdo preenchido no item 7
	cout << "Valor posição 8: " << vetor[8] << " com endereço: " << &vetor[8] << endl; // contêm lixo de memória
	cout << "Valor posição 9: " << vetor[9] << " com endereço: " << &vetor[9] << endl; // contêm valor 10
	cout << "Conteúdo do ponteiro : " << *ptr << " com endereço: " << ptr << endl; // ponteiro não mudou de lugar
		
	
	
	
	
	
	
	
	
	cout << endl << "9. Adicionando valores ao ponteiro vetor" << endl;
	*vetor = 1; /* Armazena o valor 1 no vetor[0], pois vetor aponta p/ &(vetor[0]) */
	*(vetor+5) = 22; /* Armazena o valor 22 no vetor[5] */
	cout << vetor[0] << endl;
	cout << vetor[5] << endl;
	cout << &vetor[5] << endl;
	cout << &vetor << endl;
	cout << &vetor[0] << endl;


	return 0;
}

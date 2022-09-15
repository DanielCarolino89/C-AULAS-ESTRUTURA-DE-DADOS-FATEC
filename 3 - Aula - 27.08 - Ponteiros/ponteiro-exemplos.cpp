#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	/*
	Com rela��o a ponteiros, a declara��o � feita de um jeito e o uso � feito de outro jeito. 
	Um ponteiro pode apontar para um int, para um float ou vetor, dependendo do tipo que foi declarado.
	*/
	int vetor[10]; /* Vetor de Inteiros: vetor == &(vetor[0]) */
	int dado = 5;
	float m ='a';
	int *ptr = NULL; // declara��o de ponteiro e defini��o 
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
	
	cout << endl << "1. Ponteiro ptr aponta para o endere�o da vari�vel dado" << endl;
	ptr = &dado; /* Ponteiro ptr aponta para o endere�o da vari�vel dado */
	//ptr = dado; causa erro de convers�o de tipos
	// ptr = m; causa erro de convers�o de tipos. Ponteiro de int tem que apontar para endere�o de int
	cout << ptr << endl; // exibe o endere�o que o ponteiro aponta
	
	
	
	
	
	
	
	
	
	cout << endl << "2. O conte�do do ponteiro (*ptr) armazena o valor 130" << endl;
	*ptr = 130; /* o conte�do do ponteiro (ptr) armazena o valor 130 */
	cout << *ptr << endl; // exibe o conte�do que foi armazenado no endere�o que ponteiro apontava
	cout << dado << endl;




	




	cout << endl << "3. Ponteiro pv (void, gen�rico) aponta para o endere�o da vari�vel dado (int)" << endl;
	pv = &dado; /* Ponteiro pv aponta para o endere�o da vari�vel dado */
	//pv = m;  causa erro de convers�o de tipos
	cout << pv << endl;
	cout << &dado << endl; // para confirmar se o ponteiro est� apontando para o lugar certo

	
	
	
	
	
	
	

	cout << endl << "4. Ponteiro ptr aponta para o endere�o inicial do vetor de inteiros" << endl;
	ptr = vetor; /* Ponteiro ptr aponta para o endere�o INICIAL do vetor de inteiros. 
					O nome de um array j� � um ponteiro para o seu primeiro elemento (vetor[0]) */
	*ptr = 2;
	vetor[1] = 100;
	cout << ptr << endl;
	cout << &vetor << endl; // est� passando o endere�o da primeira casa do vetor (vetor == &vetor == &vetor[0])
	cout << vetor << endl; // est� passando o endere�o da primeira casa do vetor
	cout << &vetor[0] << endl; // est� passando o endere�o da primeira casa do vetor
	cout << vetor[0] << endl;
	cout << ptr[1];
	
	
	
	
	
	
	
	
	cout << endl << "5. Ponterio ptr e vetor apontam para o mesmo endere�o de mem�ria " << endl;
	vetor[2] = 130;
	ptr = &vetor[2]; // Ponteiro ptr aponta para o endere�o do 3 indice do vetor 
	cout << *ptr << endl; // exibe o conte�do do ponteiro
	cout << vetor[2] << endl; // exibe o conte�do da 3 casa do vetor
	
	
	
	
	
	
	
	
	
	cout << endl << "6. Ponteiro ptr apontando para o mesmo endere�o do ponteiro ptr2" << endl;
	vetor[6] = 55;
	ptr2 = &vetor[6]; // Ponteiro ptr2 aponta para o endere�o do indice 6 do vetor
	ptr = ptr2;		// Ponteiro ptr aponta para o mesmo lugar que o ponteiro ptr2 aponta
	cout << ptr << endl;
	cout << ptr2 << endl;
	cout << *ptr << endl;	// se apontam para o mesmo lugar de mem�ria ent�o tem o mesmo conte�do
	cout << *ptr2 << endl;	// se apontam para o mesmo lugar de mem�ria ent�o tem o mesmo conte�do
	
	
	
	
	
	
	
	
	
	cout << endl << "7. Adicinando um inteiro ao ponteiro(avan�ando o ponteiro no vetor):" << endl;
	ptr = &vetor[6];
	//++ptr;
	ptr = ptr + 1;	// ponteiro ptr avan�a uma casa no vetor(ptr++ , ou pode regridir uma casa ptr--)
	*ptr = 22; // ou seja coloca 22 na posi��o vetor[7]
	cout << ptr << endl;	// mostra o endere�o do ponteiro ptr
	cout << &vetor[7] << endl;	// confirma onde aponta o ponteiro ptr
	cout << vetor[7] << endl;
	cout << &vetor[6] << endl;
	
	
	
	
	
	
	
	
	
	cout << endl << "8. Adicinando inteiro ao conte�do" << endl;
	*(ptr+2) = 10 ; // coloca o valor 10, 2 casas depois do ponteiro. CUIDADO: ponteiro N�O anda assim.
	cout << "Valor posi��o 7: " << vetor[7] << " com endere�o: " << &vetor[7] << endl; // conte�do preenchido no item 7
	cout << "Valor posi��o 8: " << vetor[8] << " com endere�o: " << &vetor[8] << endl; // cont�m lixo de mem�ria
	cout << "Valor posi��o 9: " << vetor[9] << " com endere�o: " << &vetor[9] << endl; // cont�m valor 10
	cout << "Conte�do do ponteiro : " << *ptr << " com endere�o: " << ptr << endl; // ponteiro n�o mudou de lugar
		
	
	
	
	
	
	
	
	
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

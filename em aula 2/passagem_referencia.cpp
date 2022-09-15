#include <iostream>
#include <cstring>
#include <locale>
#include <cmath>


using namespace std;

/*cabeçalho*/


/*Definição de função troca*/
void troca_copia(int v1, int v2)
{
	v1 = 5;
	v2 = 7;
}

void troca_referencia(int *v1, int *v2)
{
	*v1 = 5;
	*v2 = 7;
}

void inserir_sobrenome(char dunha[])
{
	char sobrenome[10] = "Rouhani", completo[50];
	
	strcat(dunha, sobrenome);
	cout << dunha;
}

int main()
{
	int v1 = 8, v2 = 3;
	char nome[20] = "Sama";
	
	troca_copia(v1,v2);
	cout << "Troca por valor - " << "V1: " << v1 << "   V2: " << v2 << endl;
	
	troca_referencia(&v1, &v2);
	cout << "Troca por referencia - " << "V1: " << v1 << "   V2: " << v2 << endl;
	
	inserir_sobrenome(nome);
	
	cout << v1;
	cout << v2;
	

	
	return 0;
}

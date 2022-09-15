#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

struct Pessoa{
	char nome[30];
	int idade;
	float peso;
};

int main()
{
	Pessoa *p1, p2;
	int j;
	p1 = &p2;
	p1->peso = 55.9;
	p1->idade = 22;
	cout << p1->idade << endl;
	cout << p1->peso << endl;
	
	return 0;
	
}

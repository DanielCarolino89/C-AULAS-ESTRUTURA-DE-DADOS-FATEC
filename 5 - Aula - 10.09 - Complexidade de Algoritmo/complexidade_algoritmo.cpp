#include <iostream>
#include <time.h>
#include <vector>
#include <set>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	vector<int> vet;
	
	bool exemplo1(v, x)
	{
		int tamanho = vet.size() // O(1)
		for(int i=0; i<tamanho; i++) // O(N)
		{
			if(vetor[i] == x); // O(1)
				return true; // O(1)
		}
		return false; // O(1)
	}
	
	/* ignorar as constantes e considerar o maior grau
	   Complexidade: O(1) + O(N) * O(1) * O(1) + O(1)
	   Complexidade: O(N) --> Linear
	*/
	
	
	
	
	
	/*############################################*/
	bool exemplo2(vet)
	{
		int tamanho = vet.size(); //O(1)
		for(int i=0; i<tamanho; i++){ //O(N)
			for(int j=0; j<tamanho; j++){ //O(N)
				if(i!=j && vet[i] == vet[j]) //O(1)
					return true; //O(1)
			}
		}
		return false; //O(1)
	}
	
	// ignorar as constantes e considerar o maior grau
	// Complexidade: O(1) + O(N) * O(N) * O(1) * O(1) + O(1) 
	// 				 O(N^2) --> Quadrática
	
	
	
	
	/*############################################*/
	bool exemplo3(vet)
	{
		int tamanho = vet.size(); //O(1)
		int k
		for(int i=0; i<tamanho; i++){ //O(N)
			for(int j=0; j<tamanho; j++){ //O(N)
				if(vet[i] == vet[j]) //O(1)
					k++; //O(1)
			}
		}
		// ....
		
		int p = 0; //O(1)
		for(int i=0; i<tamanho; i++){ //O(N)
			if(vet[i] == 10) //O(1)
			p = 2p; //O(1)
		}
		
		// ....
		
		float pi=3.1416; //O(1)
		for(int i=0; i<tamanho; i++){ //O(N)
			if(vet[i] == pi) //O(1)
				pi=pi*pi; //O(1)
		}
		
		return k + p + pi; //O(1)
	}
	
	/* ignorar as constantes e utilizar o termo de maior grau
		Complexidade: 	O(N)*O(N) + O(N) + O(N)
						O(N^2) + 2*O(N)
						O(N^2) + O(N)
						O(N^2)
	*/
	
	
	
	
	
	/*############################################*/
	vector<int> vec;
	bool exemplo4(vet, vec){
		int tamanhho = vet.size(); //O(1)
		int tamanho2 = vec.size(); //O(1)
		for(int i=0; i<tamanho; i++){ //O(N)
			for(int j=0; j<tamanho2; j++) //O(M)
				if(vet[i] == vec[j])  //O(1)
					return true;  //O(1)
		}
		return false;  //O(1)
	}
	/* ignorar as constantes e utilizar o termo de maior grau
		Complexidade: 	O(1) + O(1) + O(N)*O(M)
						O(N)*O(M)
	*/
	
	
	
	
	/*############################################*/
	// Quero saber se a menor idade aparece 2x no vet
	vector<int> idades;
	bool exemplo5(idades){
		int tamanho = idades.size(); // O(1)
		int menor_idade = 20; // O(1)
		for(int i=0; i<tamanho; i++){ // O(N)
			if(idades[i] < menor_idade) // O(1)
				menor_idade = idades[i]; // O(1)
		}
		
		int cont=0;
		for(int i=0; i<tamanho; i++){ // O(N)
			if(vet[i] == menor_idade) // O(1)
				cout++ // O(1)
		}
		return cout; // O(1)
	}
		/* ignorar as constantes e utilizar o termo de maior grau
	   Complexidade do exemplo5: O(N) + O(N) = 2*O(N)
	*/
	
	
	
	
	/*############################################*/
	bool exemplo6(idades){
		sort(idades.begin(), idades.end()); // O(NlogN)
		if(idades[0] == idades[1]) // O(1)
			return true // O(1)
	}
	
	/* ignorar as constantes e utilizar o termo de maior grau
	   Complexidade do exemplo6: O(N*LogN)
	*/
	
	
	
	
	
	
	/*############################################*/
	set(int) s;
	bool exemplo7(s, vector<int> vec){
		int tamanho = vec.size(); // O(1)
		for(int i=0; i<tamanho; i++) // O(N)
			if(s.count(vec[i]))  // O(logN)
	}
	/* ignorar as constantes e utilizar o termo de maior grau
	   Complexidade do exemplo7: O(N) * O(NLogN)
	   							N* LogN
	*/
	
}

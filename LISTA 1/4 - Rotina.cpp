/* 4)Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM"
e 0 se a string digitado foi "NAO". A rotina/função só deve retornar alguma coisa se a string 
digitado for "SIM" ou "NAO". Faça a verificação para que o usuário não estrague o seu código.    */

#include<iostream>
using namespace std;


int main()
{
    string rotina;
      

    cout << "\n Digite 'SIM' ou 'NAO': " ;
    cin >> rotina;
    
    	if(rotina == "SIM")
		{
    	cout << "\n O SIM ESTA CORRETO! \n";
        return 1;
 		}
  		  else if(rotina == "NAO")
		{
    	cout << "\n O NAO ESTA CORRETO! \n";
        return 0;
 	   }
		cout<<"\n String digitada incorreta \n";
		
 
	return 0;
}


/* 4)Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se a string digitada foi "SIM"
e 0 se a string digitado foi "NAO". A rotina/fun��o s� deve retornar alguma coisa se a string 
digitado for "SIM" ou "NAO". Fa�a a verifica��o para que o usu�rio n�o estrague o seu c�digo.    */

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


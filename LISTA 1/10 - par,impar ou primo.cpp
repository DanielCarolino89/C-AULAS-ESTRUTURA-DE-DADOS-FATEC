/* 10)Crie um programa que tenha uma fun��o que receba um inteiro e verifique se � 
par, impar ou n�mero primo. As mensagens de "� par" ou "� impar" ou "� primo" devem ser exibidas
 na pr�pria fun��o, ou seja, a fun��o em si n�o deve retornar nada.   */

#include<iostream>
#include<string.h>
#include <cstring>

using namespace std;

int main()
{
    int numero,aux,div=0;
    
    cout << " Digite um numero: ";
    cin >> numero;

    if (numero%2==0)
        cout <<"par"<<endl;
    else 
        cout <<"impar"<<endl;
        
    for(aux=1 ; aux<=numero ; aux++)
        if(numero%aux==0)
            div++;

    if(div==2)
        cout<<"e primo"<<endl;
   
    return 0;
}


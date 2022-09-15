/* 10)Crie um programa que tenha uma função que receba um inteiro e verifique se é 
par, impar ou número primo. As mensagens de "É par" ou "É impar" ou "É primo" devem ser exibidas
 na própria função, ou seja, a função em si não deve retornar nada.   */

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


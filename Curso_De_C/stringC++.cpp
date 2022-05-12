#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal do programa
int main(){

    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palvra \n";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variavel
    cout << "\n A palavra eh: " <<  palavra;

    //Pausa o sistema após executado
    system ("pause");

    return 0;
}

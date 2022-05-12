#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta{
    string cor;
    string nome;
};

int main(){

    //Criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    //Modificando os valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //Exibindo Valores
    cout << "Fruta :" << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

    printf("\n");

    //Criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta [2];

    //Modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    //variavel
    int cont;

    //Exibindo valores na tela.
    for(cont = 0; cont < 2; cont++){

        cout << "\nFruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor << "\n";
    }

    return 0;

}

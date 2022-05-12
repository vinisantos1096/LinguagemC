#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\n A Soma entre %d e %d eh: %d", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}

int main(){

    //Definindo Variaveis
    int a = 5, b = 7;

    //Função que mostra a soma
    mostraSoma(a,b);

    //Exibe o resultado da soma retornado pela Função
    printf("\n A Soma entre %d e %d eh: %d", a, b, retornaSoma(a,b));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){

    //Usar acentos.
    setlocale (LC_ALL, "Portuguese");

    //Variavel
    int a = 20;

    //Imprimindo valor de um variavel
    printf("Valor de a: %d \n", a);

    //Imprimindo o endereço de um variável
    printf("Endereço de a: %d \n", &a);

    //VARIÀVEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSIÇÕES DA MEMORIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSIÇÃO DA VARIÁVEL b
    ponteiro = &b;

    //Imprimindo o valor de uma varial
    printf("Valor de b: %d \n", b);

    // * pode ser lido como "CONTEUDO APONTADO POR"
    *ponteiro = 40;

    //Imprimindo o valor de uma variavel
    printf ("Valor de b: %d \n", b);

    return 0;



}

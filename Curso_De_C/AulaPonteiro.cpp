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

    //Imprimindo o endere�o de um vari�vel
    printf("Endere�o de a: %d \n", &a);

    //VARI�VEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSI��ES DA MEMORIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSI��O DA VARI�VEL b
    ponteiro = &b;

    //Imprimindo o valor de uma varial
    printf("Valor de b: %d \n", b);

    // * pode ser lido como "CONTEUDO APONTADO POR"
    *ponteiro = 40;

    //Imprimindo o valor de uma variavel
    printf ("Valor de b: %d \n", b);

    return 0;



}

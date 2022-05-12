#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");
    int opcao;

    while(opcao < 1 || opcao > 3){

        printf ("\n=========================\n");
        printf ("\nESCOLHA UMA OPÇÃO ABAIXO!\n");
        printf ("\n1- OPÇÃO NUMERO 1: ");
        printf ("\n2- OPÇÃO NUMERO 2: ");
        printf ("\n3- OPÇÃO NUMERO 3: \n\n");

        scanf ("%d", &opcao);

        switch(opcao){

        case 1:
            printf("\nVocê escolheu a opção numero 1");
            break;

        case 2:
            printf("\nVocê escolheu a opção numero 2");
            break;

        case 3:
            printf ("\nVocê escolheu a opção numero 3");
            break;

        default:
            printf ("\nOpção Inválida!!!");
            break;
        }
    }
}

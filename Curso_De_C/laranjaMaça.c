#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");
    int opcao;

    while(opcao < 1 || opcao > 2){

        printf ("\n=========================\n");
        printf ("\nESCOLHA UMA OPÇÃO ABAIXO!\n");
        printf ("\n1- Valor de Laranja: ");
        printf ("\n2- Valor de Maçã: \n\n");

        scanf ("%d", &opcao);

        switch(opcao){

        case 1:
            printf("\nVocê escolheu LARANJA e ela tem um valor de: 4,50$\n");
            break;

        case 2:
            printf("\nVocê escolheu MAÇÃ e ela tem um valor de: 3,50$\n");
            break;

        default:
            printf ("\nOPÇÃO DE FRUTA INVÁLIDA!!!");
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");
    int opcao;

    while(opcao < 1 || opcao > 2){

        printf ("\n=========================\n");
        printf ("\nESCOLHA UMA OP��O ABAIXO!\n");
        printf ("\n1- Valor de Laranja: ");
        printf ("\n2- Valor de Ma��: \n\n");

        scanf ("%d", &opcao);

        switch(opcao){

        case 1:
            printf("\nVoc� escolheu LARANJA e ela tem um valor de: 4,50$\n");
            break;

        case 2:
            printf("\nVoc� escolheu MA�� e ela tem um valor de: 3,50$\n");
            break;

        default:
            printf ("\nOP��O DE FRUTA INV�LIDA!!!");
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"Portuguese");
    int opcao;

    while(opcao < 1 || opcao > 3){

        printf ("\n=========================\n");
        printf ("\nESCOLHA UMA OP��O ABAIXO!\n");
        printf ("\n1- OP��O NUMERO 1: ");
        printf ("\n2- OP��O NUMERO 2: ");
        printf ("\n3- OP��O NUMERO 3: \n\n");

        scanf ("%d", &opcao);

        switch(opcao){

        case 1:
            printf("\nVoc� escolheu a op��o numero 1");
            break;

        case 2:
            printf("\nVoc� escolheu a op��o numero 2");
            break;

        case 3:
            printf ("\nVoc� escolheu a op��o numero 3");
            break;

        default:
            printf ("\nOp��o Inv�lida!!!");
            break;
        }
    }
}

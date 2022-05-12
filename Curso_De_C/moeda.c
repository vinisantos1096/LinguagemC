#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    int moeda;
    printf("\nDigite uma opção para cotação da moeda\n");
    printf("\n======================================\n");
    printf("\n 1- USD:\n");
    printf("\n 2- EURO:\n");
    printf("\n 3- GBP:\n");
    printf("\n 4- JPY:\n");
    printf("\n 5- CAD:\n");
    printf("\n 6- CHF:\n");
    printf("\n 7- AUD:\n");
    scanf("%d", &moeda);

    switch(moeda){

    case 1:
        printf("\nO valor da moeda 'USD' é 5,02$");
        break;

    case 2:
        printf("\nO valor da moeda 'EURO' é 5.56$");
        break;

    case 3:
        printf("\nO valor da moeda 'GBP' é 6.62$");
        break;

    case 4:
        printf("\nO valor da moeda 'JPY' é 6.62$");
        break;

    case 5:
        printf("\nO valor da moeda 'CAD' é 3.99$");
        break;

    case 6:
        printf("\nO valor da moeda 'CHF' é 5.39$");
        break;

    case 7:
        printf("\nO valor da moeda 'AUD' é 3.37$");
        break;

    default:
        printf("\nOPÇÃO INVÁLIDA!!!");
        break;
    }
}

#include <stdio.h>
#include <stdlib.h>
#define TAM 10


void main(){

    //Imprimindo Constante na tela.
    printf ("%d\n", TAM);

    int i;

    //Contando até 10.
    for(i = 1; i <= TAM; i++){
        printf ("\n%d", i);
    }

    printf("\n");

    system("pause");
}

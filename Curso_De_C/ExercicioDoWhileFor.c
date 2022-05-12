#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos.
    setlocale(LC_ALL, "Portuguese");

    int cont;

    //Contagem regressiva pelo FOR
   for(cont = 10; cont >= 0; cont--){
        printf ("\n%d", cont);
    }

    printf ("\n");

    int i = 10;

    //Contagem regressiva pelo WHILE
    while(i >= 0){
        printf ("\n%d", i);

        i = i - 1;
    }

    printf ("\n");

    int j = 10;

    //Contagem regressiva pelo Do While
    do {
        printf ("\n%d", j);

        j--;
    } while (j >= 0);
}

#include <stdio.h>
#include <stdlib.h>


void main()
{
    //Variaveis
    int a = 1, b = 10;

    //Contando até 10
    while(a <= 10){

        //Imprimindo na tela
        printf("\n%d", a);

        //Incremento
        a++; //que é a mesma coisa que -> a = a + 1;
    }

    //Contagem regressiva
    while (b >= 1){

        //Imprimindo 'b' na tela
        printf ("\n%d", b);

        //Incremento
        b--; //que é a mesma coisa que -> b = b - 1;
    }

    printf("\n");
    system("pause");
}

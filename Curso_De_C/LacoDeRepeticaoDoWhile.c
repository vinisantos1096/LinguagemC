#include <stdio.h>
#include <stdlib.h>


void main()
{
    //Variaveis
    int a = 1, b = 10;

    //Primeiro confere a condi��o, depois repete o bloco.
    while(a <= 10){

        //Imprimindo na tela
        printf("\n%d", a);

        //Incremento
        a++; //que � a mesma coisa que -> a = a + 1;
    }

    //Alterando o valor de 'a'
    a = 20;

    //Primeiro executa uma vez, depois confere a condi��o.
    do {

        //Imprimindo 'a' na tela
        printf ("\n%d", a);

        //Incremento
        a++;

    } while (a <= 10);

    //Pausa o programa ap�s executar.
    system ("pause");
}



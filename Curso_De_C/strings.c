#include <stdio.h>
#include <stdlib.h>

void main(){

    //Variavel
    char palavra[10];

    //Instru��o
    printf ("Digite uma palavra: \n");

    //Limpa o Buffer
    setbuf (stdin, 0);

    //L� a string
    fgets (palavra, 255, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprimi na tela.
    printf ("\n%s", palavra);

    //Pausa o programa ap�s executar.
    system ("pause");
}

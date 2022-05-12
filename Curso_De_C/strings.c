#include <stdio.h>
#include <stdlib.h>

void main(){

    //Variavel
    char palavra[10];

    //Instrução
    printf ("Digite uma palavra: \n");

    //Limpa o Buffer
    setbuf (stdin, 0);

    //Lê a string
    fgets (palavra, 255, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprimi na tela.
    printf ("\n%s", palavra);

    //Pausa o programa após executar.
    system ("pause");
}

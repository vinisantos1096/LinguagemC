#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
    return 'x';
    //Ou poderia ser return 120; pois na tabela asc o 120 � igual a x.
}


int main(){

    //Vari�vel
    char letra;

    //Variavel letra recebendo o valor da fun��o
    letra = retornaLetra();

    //Imprimindo na tela.
    printf ("A letra da funcao eh %c", letra);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

    //Definindo que a fun��o existe //Pode colocar a fun��o inteira aqui em cima, ou apenas o nome e definir ela embaixo! pois, se definir ela somente embaixo n�o ir� da certo.
    int retornaDez(); // Mas, se definir o nome aqui em cima para uma melhor organiza��o e colocar a fun��o embaixo funcionar�.
    float retornaQuebrado();

int main(){

    //Variavel
    int a;

    //Passando o retorno de uma fun��o para uma vari�vel
    a = retornaDez();

    //imprimindo na tela
    printf("\n%d", a);

    //variavel
    float b;

    //Passando o retorno de uma fun��o para uma vari�vel
    b = retornaQuebrado();

    //imprimindo na tela
    printf ("\n%f", b);

    return 0;
}

//Fun��o para numeros inteiros
int retornaDez(){
    printf ("\nOLA MUNDO!\n"); //Pode por printf na fun��o tambem que funciona.
    return 10;
}

//Fun��o Para numeros quebrados
float retornaQuebrado(){
    return 5.5;
}

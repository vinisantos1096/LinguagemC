#include <stdio.h>
#include <stdlib.h>

    //Definindo que a função existe //Pode colocar a função inteira aqui em cima, ou apenas o nome e definir ela embaixo! pois, se definir ela somente embaixo não irá da certo.
    int retornaDez(); // Mas, se definir o nome aqui em cima para uma melhor organização e colocar a função embaixo funcionará.
    float retornaQuebrado();

int main(){

    //Variavel
    int a;

    //Passando o retorno de uma função para uma variável
    a = retornaDez();

    //imprimindo na tela
    printf("\n%d", a);

    //variavel
    float b;

    //Passando o retorno de uma função para uma variável
    b = retornaQuebrado();

    //imprimindo na tela
    printf ("\n%f", b);

    return 0;
}

//Função para numeros inteiros
int retornaDez(){
    printf ("\nOLA MUNDO!\n"); //Pode por printf na função tambem que funciona.
    return 10;
}

//Função Para numeros quebrados
float retornaQuebrado(){
    return 5.5;
}

#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){

    //Definindo Variavel
    int a;

    //Instrução
    printf("Digite um valor: \n");

    //Passa um valor para variavel 'a'
    scanf ("%d", &a);

    //Chama a função
    mostraSucessor(a);

    //Exibe a função antecessor
    printf("\nO antecessor de %d eh %d ", a, retornaAntecessor(a));

    return 0;
}

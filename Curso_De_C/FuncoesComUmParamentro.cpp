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

    //Instru��o
    printf("Digite um valor: \n");

    //Passa um valor para variavel 'a'
    scanf ("%d", &a);

    //Chama a fun��o
    mostraSucessor(a);

    //Exibe a fun��o antecessor
    printf("\nO antecessor de %d eh %d ", a, retornaAntecessor(a));

    return 0;
}

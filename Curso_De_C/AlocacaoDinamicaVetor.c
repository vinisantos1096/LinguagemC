#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){

    int *aux;

    //Alocação Dinâmina de Memória
    aux = (int*) malloc(tamanho * sizeof(int)); //malloc para alocar tamanho na memoria

    //Retorna o ponteiro que aponta para a primeira posição de memoria do vetor alocado.
    return aux;
}

int main(){

    //Variaveis
    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuário.
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //Coloca valores no vetor
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }

    //imprimi vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }


    return 0;
}

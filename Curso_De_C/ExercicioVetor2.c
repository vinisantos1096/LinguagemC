#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia um tamanho um vetor e preencha cada posi��o com um valor
    //depois calcule a m�dia dos valores acessando o vetor.

    int tamanho;
    printf("Qual ser� o tamanho do vetor?");  //Perguntando qual � o tamanho do vetor para o usu�rio.
    scanf("%d", &tamanho);

    float vetor[tamanho], soma; //variavel float e int

    int i;

    for(i = 0; i < tamanho; i++){ //Digitando os valores do vetor.
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i = 0; i < tamanho; i++){ //Exibindo os valores na tela.
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }

    printf("\nA m�dia dos valores �: %.2f", soma/tamanho); //Calculando e mostrando media dos vetores.

}

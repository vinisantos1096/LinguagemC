#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    float vetor[3];  //Vetor com 3 casas sempre começará por 0, entao 3 casas seria, 0, 1, 2.. (sempre 1 a menos)

    printf("Digite um valor: ");
    scanf ("%f", &vetor[0]);
    printf("\nDigite um valor: ");
    scanf("%f", &vetor[1]);
    printf("\nDigite um valor: ");
    scanf("%f", &vetor[2]);

    printf("\nVetor[0] = %.2f", vetor[0]);
    printf("\nVetor[1] = %.2f", vetor[1]);
    printf("\nVetor[2] = %.2f", vetor[2]);

    printf("\nA média dos valores é %.2f", ( vetor[0]+vetor[1]+vetor[2] ) / 3);
}

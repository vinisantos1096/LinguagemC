#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    //Crie um algoritmo que leia 2 notas e mostre a m�dia entre elas.

    //Definindo Vari�veis
    float nota1, nota2, resultado;

    //Lendo primeiro valor
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    //Lendo segundo valor
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    //Calculando e mostrando resultado final
    resultado = (nota1 + nota2) / 2;
    printf("A m�dia �: %f", resultado);

}

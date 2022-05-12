#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Colocar em portugues
    setlocale(LC_ALL, "Portuguese");

    //variaveis
    int num1, num2, num3, vezes;

    //Lendo 3 numeros ao mesmo tempo
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Valores lidos: %d, %d, %d\n", num1, num2, num3);

    //Recebendo resultado das variaveis, calculando e mostrando resultado
    vezes = num1 * num2 * num3;
    printf ("O valor da multiplicação dos 3 numeros é de %d:", vezes);

    return 0;
}

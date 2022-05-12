#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprimi Olá
    printf("Olá \n");

    //Lendo valor inteiro
    int a = 50;
    printf ("O valor de a é = %d \n", a);
    printf ("Digite um novo valor inteiro para %d \n", a);
    scanf ("%d", &a);
    printf ("O valor de a mudou para %d \n", a);

    //lendo valor real
    float b = 5.5;
    printf("\n O valor de b é = %f \n", b);
    printf("Digite um novo valor real para %f \n", b);
    scanf ("%f", &b);
    printf ("O valor de b mudou para %f \n", b);

    //lendo letra
    char c = 't';
    printf ("\n O valor de c é = %c \n", c);
    printf ("Digite uma nova letra %c \n");
    fflush(stdin); //É como se fosse para dar um refresh, limpar e conseguir ler as variaveis char
    scanf("%c", &c);
    printf("O valor de c mudou para %c", c);
}

#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia;
    printf ("Digite um número de dia entre 1 e 7: ");
    scanf ("%d", &dia);
    switch(dia)
    {
        case 1: printf("\nESTE DIA É DOMINGO"); break;
        case 2: printf("\nESTE DIA É SEGUNDA FEIRA"); break;
        case 3: printf("\nESTE DIA É TERÇA FEIRA"); break;
        case 4: printf("\nESTE DIA É QUARTA FEIRA"); break;
        case 5: printf ("\nESTE DIA É QUINTA FEIRA"); break;
        case 6: printf ("\nESTE DIA É SEXTA FEIRA"); break;
        case 7: printf ("\nESTE DIA É SÁBADO"); break;
        default: printf ("\nDIA INVÁLIDO"); break;
    }
    return 0;
}

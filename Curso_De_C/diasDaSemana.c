#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia;
    printf ("Digite um n�mero de dia entre 1 e 7: ");
    scanf ("%d", &dia);
    switch(dia)
    {
        case 1: printf("\nESTE DIA � DOMINGO"); break;
        case 2: printf("\nESTE DIA � SEGUNDA FEIRA"); break;
        case 3: printf("\nESTE DIA � TER�A FEIRA"); break;
        case 4: printf("\nESTE DIA � QUARTA FEIRA"); break;
        case 5: printf ("\nESTE DIA � QUINTA FEIRA"); break;
        case 6: printf ("\nESTE DIA � SEXTA FEIRA"); break;
        case 7: printf ("\nESTE DIA � S�BADO"); break;
        default: printf ("\nDIA INV�LIDO"); break;
    }
    return 0;
}

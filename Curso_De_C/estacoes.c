#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int mes;
    printf ("Digite o m�s que voc� quer em formato n�merico para poder saber qual esta��o de ano ele �: \n");
    scanf("%d",&mes);
    switch(mes)
    {
        case 9: case 10: case 11:
            printf("\nEste m�s � da Primavera");
            break;
        case 12: case 1: case 2:
            printf ("\nEste m�s � do Ver�o");
            break;
        case 3: case 4: case 5:
            printf ("\nEste m�s � do Outono");
            break;
        case 6: case 7: case 8:
            printf ("\nEste m�s � do Inverno");
            break;
        default:
            printf ("\nM�s Invalido");
            break;
    }
    return 0;

}

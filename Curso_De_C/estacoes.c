#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");
    int mes;
    printf ("Digite o mês que você quer em formato númerico para poder saber qual estação de ano ele é: \n");
    scanf("%d",&mes);
    switch(mes)
    {
        case 9: case 10: case 11:
            printf("\nEste mês é da Primavera");
            break;
        case 12: case 1: case 2:
            printf ("\nEste mês é do Verão");
            break;
        case 3: case 4: case 5:
            printf ("\nEste mês é do Outono");
            break;
        case 6: case 7: case 8:
            printf ("\nEste mês é do Inverno");
            break;
        default:
            printf ("\nMês Invalido");
            break;
    }
    return 0;

}

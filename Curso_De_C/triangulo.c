#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf ("Digite o primeiro lado do tri�ngulo: ");
    scanf ("%d", &a);
    printf ("Digite o segundo lado do tri�ngulo: ");
    scanf ("%d", &b);
    printf ("Digite o terceiro lado do tri�ngulo: ");
    scanf ("%d", &c);
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        //Todos valores iguais
        if (a == b && b == c && c == a)
            {
                printf ("\nEste � um Tri�ngulo Equil�tero");
            }
            //Pelo menos 2 lados iguais
        else if (a == b || b == c || c == a)
            {
                printf ("\nEste � um Tri�ngulo Is�sceles");
            }
            //Todos lados diferentes
        else if (a != b && b != c && c != a)
            printf ("\nEste � um Tri�ngulo Escaleno");
    }
    else
        printf ("\nEsses valores n�o formam um tri�ngulo");
    return 0;

}

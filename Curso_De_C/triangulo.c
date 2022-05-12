#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    printf ("Digite o primeiro lado do triângulo: ");
    scanf ("%d", &a);
    printf ("Digite o segundo lado do triângulo: ");
    scanf ("%d", &b);
    printf ("Digite o terceiro lado do triângulo: ");
    scanf ("%d", &c);
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        //Todos valores iguais
        if (a == b && b == c && c == a)
            {
                printf ("\nEste é um Triângulo Equilátero");
            }
            //Pelo menos 2 lados iguais
        else if (a == b || b == c || c == a)
            {
                printf ("\nEste é um Triângulo Isósceles");
            }
            //Todos lados diferentes
        else if (a != b && b != c && c != a)
            printf ("\nEste é um Triângulo Escaleno");
    }
    else
        printf ("\nEsses valores não formam um triângulo");
    return 0;

}

#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf ("Digite um número inteiro: ");
    scanf ("%d", &numero);
    if (numero%2 == 0)
        printf ("\nO número é Par");
    else
        printf ("\nO número é impar");
    return 0;
}

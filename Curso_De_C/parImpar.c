#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf ("Digite um n�mero inteiro: ");
    scanf ("%d", &numero);
    if (numero%2 == 0)
        printf ("\nO n�mero � Par");
    else
        printf ("\nO n�mero � impar");
    return 0;
}

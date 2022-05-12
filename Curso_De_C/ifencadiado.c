#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2;
        printf ("Digite o primeiro número ");
        scanf ("%d", &N1);
        printf ("Digite o segundo número ");
        scanf ("%d", &N2);
    if (N1 == N2)
        printf ("Os numeros são iguais!");
    else
        if (N1 > N2)
        printf ("O maior Valor é = %d", N1);
    else
        printf ("O maior Valor é = %d", N2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N1, N2;
        printf ("Digite o primeiro n�mero ");
        scanf ("%d", &N1);
        printf ("Digite o segundo n�mero ");
        scanf ("%d", &N2);
    if (N1 == N2)
        printf ("Os numeros s�o iguais!");
    else
        if (N1 > N2)
        printf ("O maior Valor � = %d", N1);
    else
        printf ("O maior Valor � = %d", N2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    //Para descobrir a tabela de ASC é o site ascii.cl

    setlocale(LC_ALL, "Portuguese");
    // Definindo variavel
    char letra = 'x';

    //condicional simples
    if(letra == 'x'){
        printf ("\nA letra é x.");
    }

    printf ("\nO Codigo da letra = %d", letra);

    if (letra == 120) {
        printf ("\nA letra pelo codigo 120 é %c", letra);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para usar numeros aleatorios

void main ()
{
    //Responsavel por alimentar o random de forma diferente
    srand ((unsigned)time(NULL));

    //Variavel que recebe o resto da divisão do numero por 3 (Aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Variavel que recebe o resto da divisão do numero por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //imprimi o valor
    printf ("%d \n", aleatorioSegundo);

    system("pause");
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Deixar em portugues
    setlocale(LC_ALL, "Portuguese");
    //Variaveis
    int nota1, nota2;

    //Lendo primeira nota
    printf("Digite a primeira nota: ");
    scanf ("%d", &nota1);

    //Lendo segunda nota
    printf("Digite a segunda nota: ");
    scanf ("%d", &nota2);

    //Mostrando o resultado e tendo o valor absoluto
    printf ("A diferença entre os dois é: %d", abs(nota1 - nota2) );
}


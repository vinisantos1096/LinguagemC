#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float nota1, nota2, nota3, media;

    setlocale(LC_ALL, "Portuguese");
    printf ("\nDigite sua primeira nota: ");
    scanf ("%f", &nota1);
    printf ("\nDigite sua segunda nota: ");
    scanf ("%f", &nota2);
    printf ("\nDigite sua terceira nota: ");
    scanf ("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf ("\nA media do aluno é %.1f", media);

    if (media >= 7){
        printf ("\nO aluno está aprovado!");
    }else {
        printf ("\nO aluno está reprovado!");
    }
}

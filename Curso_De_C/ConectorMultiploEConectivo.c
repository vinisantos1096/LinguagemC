#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL, "Portuguese");

    //Definindo Variaveis
    int a = 20;

    //Conectivo Lógico E (AND) representado por && , obs: Se uma comparação for FALSA, não entra no bloco!
    if (a > 5 && a < 15){
        printf ("\nA variavel 'a' está entre 5 e 15 ");
    }else {
        printf ("\nA variavel 'a' não está entre 5 e 15 ");
    }

    //Conectivo Lógico OU (OR) representado por || , obs: Se uma comparação for VERDADEIRA, já entra no bloco!
    if (a > 5 || a > 15){
        printf ("\nA variavel 'a' é maior que 5 ou 15 ");
    }else {
        printf ("\nA variavel 'a' não é maior que 5 ou 15 ");
    }

    //Misturando Conectivos
    if ( (a > 5 && a < 15) || a == 20 ) {
        printf ("\nA variavel 'a' esta entre 5 e 15 ou ela é igual a 20\n");
    }else {
        printf ("\nA variavel 'a' não está entre 5 e 15 e não vale 20\n");
    }

    system ("pause");
}

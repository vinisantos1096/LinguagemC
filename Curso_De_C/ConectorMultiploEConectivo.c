#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL, "Portuguese");

    //Definindo Variaveis
    int a = 20;

    //Conectivo L�gico E (AND) representado por && , obs: Se uma compara��o for FALSA, n�o entra no bloco!
    if (a > 5 && a < 15){
        printf ("\nA variavel 'a' est� entre 5 e 15 ");
    }else {
        printf ("\nA variavel 'a' n�o est� entre 5 e 15 ");
    }

    //Conectivo L�gico OU (OR) representado por || , obs: Se uma compara��o for VERDADEIRA, j� entra no bloco!
    if (a > 5 || a > 15){
        printf ("\nA variavel 'a' � maior que 5 ou 15 ");
    }else {
        printf ("\nA variavel 'a' n�o � maior que 5 ou 15 ");
    }

    //Misturando Conectivos
    if ( (a > 5 && a < 15) || a == 20 ) {
        printf ("\nA variavel 'a' esta entre 5 e 15 ou ela � igual a 20\n");
    }else {
        printf ("\nA variavel 'a' n�o est� entre 5 e 15 e n�o vale 20\n");
    }

    system ("pause");
}

#include <stdio.h>
#include <stdlib.h>

void main() {

    //Definindo Variaveis
    int a = 6, b = 3;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtra��o
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divis�o
    printf("\n A soma de %d e %d = %d", a, b, a / b);

    //Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da Divis�o
    printf("\n O resto da divis�o entre %d e %d = %d", a, b, a % b);

    //Valor Absoluto (sempre muda o sinal, ex: negativo vira positivo)
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pula a Linha
    printf("\n");

    //Pausa o Programa ap�s executar
    system("pause");
}

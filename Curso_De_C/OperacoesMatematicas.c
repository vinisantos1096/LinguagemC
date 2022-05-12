#include <stdio.h>
#include <stdlib.h>

void main() {

    //Definindo Variaveis
    int a = 6, b = 3;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtração
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divisão
    printf("\n A soma de %d e %d = %d", a, b, a / b);

    //Multiplicação
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisão entre %d e %d = %d", a, b, a % b);

    //Valor Absoluto (sempre muda o sinal, ex: negativo vira positivo)
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pula a Linha
    printf("\n");

    //Pausa o Programa após executar
    system("pause");
}

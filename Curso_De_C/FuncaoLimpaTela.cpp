#include <stdio.h>
#include <stdlib.h>

//Fun��o para Limpar Tela
void limpaTela(){
    system("CLS");
}

int main(){

    //Variavel
    int a;

    //Imprimindo na tela
    printf("Digite um valor para 'a': \n");

    //Lendo valor digitado.
    scanf("%d", &a);

    //Chama a fun�ao e limpa a tela
    limpaTela();

    //Ap�s limpado imprimi o valor digitado na tela.
    printf("O valor digitado foi %d \n\nFIM DO PROGRAMA!!!", a);

    return 0;
}

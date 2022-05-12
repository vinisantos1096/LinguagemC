#include <stdio.h>
#include <stdlib.h>

//Função para Limpar Tela
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

    //Chama a funçao e limpa a tela
    limpaTela();

    //Após limpado imprimi o valor digitado na tela.
    printf("O valor digitado foi %d \n\nFIM DO PROGRAMA!!!", a);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano(){
    return true; //ou false //booleano sempre ser� 1 pra verdadeiro, 0 pra falso!
}

int main(){

    //Definindo variavel
    bool variavelBooleana;

    //Variavel recebendo o valor da fun��o booleana
    variavelBooleana = retornaBooleano();

    //Imprimindo na tela
    printf ("%d", variavelBooleana); //sempre sera %d pq booleano s� retorna 0 ou 1

    //Se for verdadeiro executa o primeiro bloco!!
    if(variavelBooleana){
        printf("\nEh verdadeiro!!!");
    }//Se for falso executa o segundo bloco!!
    else{
        printf ("\nEh Falso!!");
    }
}

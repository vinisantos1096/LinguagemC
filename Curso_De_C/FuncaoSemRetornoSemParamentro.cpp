#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o sem Retorno.
void desenhaBorda(){
    printf("============================== \n");
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Chamando FUN��O
    desenhaBorda();

    //Imprimindo na tela!!!
    printf("\tOL� MUNDO !! \n");

    //Chamando FUN��O
    desenhaBorda();

return 0;
}

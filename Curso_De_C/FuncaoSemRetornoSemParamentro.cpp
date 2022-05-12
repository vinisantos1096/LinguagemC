#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função sem Retorno.
void desenhaBorda(){
    printf("============================== \n");
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Chamando FUNÇÃO
    desenhaBorda();

    //Imprimindo na tela!!!
    printf("\tOLÁ MUNDO !! \n");

    //Chamando FUNÇÃO
    desenhaBorda();

return 0;
}

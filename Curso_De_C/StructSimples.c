#include <stdio.h>
#include <string.h>

struct palavra{

    int ordem;
    char letra;
    char texto[255];
};

int main (){

    //Criando uma palvra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 10;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto,"palavrinha");

    //Mostrando valores do struct
    printf("Ordem: %d \nPrimeira Letra: %c \nPalavra: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

    printf("\n");

    //Fazendo uma lista de struct
    struct palavra listaDePalavras[3];

    //Modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';
    strcpy(listaDePalavras[0].texto, "Dahora");
    strcpy(listaDePalavras[1].texto, "Bacana");
    strcpy(listaDePalavras[2].texto, "Legal");

    int cont;

    //Percorrendo o vetor
    for(cont = 0; cont < 3; cont++){

        printf("\nOrdem: %d \nPrimeira Letra: %c \nPalavra: %s\n", listaDePalavras[cont].ordem, listaDePalavras[cont].letra, listaDePalavras[cont].texto);
    }

    return 0;
}

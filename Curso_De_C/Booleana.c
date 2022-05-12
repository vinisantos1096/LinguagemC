#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "Portuguese");
    //Bool sempre vai ser verdadeiro ou falso (true false)
    bool a = true, b = false;

    //Se A for Verdadeiro
    if(a) {
        printf ("\n a variavel A é verdadeira");
    }

    //Comparando variavel B
    if(b) {
        printf ("\n A variavel B é verdadeira");
    }else {
        printf ("\n A variavel B é falsa");
    }

    //Comparando uma Falsidade
    if(!b){
        printf ("\n A variavel B é Falsa \n");
    }

    system("Pause");
}

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
        printf ("\n a variavel A � verdadeira");
    }

    //Comparando variavel B
    if(b) {
        printf ("\n A variavel B � verdadeira");
    }else {
        printf ("\n A variavel B � falsa");
    }

    //Comparando uma Falsidade
    if(!b){
        printf ("\n A variavel B � Falsa \n");
    }

    system("Pause");
}

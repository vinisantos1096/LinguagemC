#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os n�meros
    //pares de 10 a 20 (usando While, Do While ou For)
    int i;

    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d � par \n", i);
        }else{
            printf("%d � �mpar \n", i);
        }
    }
}

#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]){

    //Auxiliar Contador
    int cont;

    cout << "\n";
    //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){

        cout << vetor[cont] << " - ";
    }
}

void pilhaPush(int pilha[TAM], int valor, int *topo){

    //Nao pode colocar mais valor
    if (*topo == TAM - 1){
        cout << "Pilha cheia: ";
    } else {

        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

int main(){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0};
    int topo = -1;  //Topo da pilha

    imprime_vetor(pilha);

    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo);
    imprime_vetor(pilha);
}

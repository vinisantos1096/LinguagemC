#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    //Usar acentos
    setlocale(LC_ALL, "Portuguese");

    //Informar qual arquivo será lido
    ifstream input("Texto.txt");

    //String que receberá o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conteudo
    cout << textoLido;

    return 0;
}

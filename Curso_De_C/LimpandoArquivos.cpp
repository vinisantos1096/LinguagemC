#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

//Exemplo de como apagar um arquivo, como n�o tem nenhum arquivo criado n�o ser� nada apagado.
//Mas � como funciona caso queira apagar um arquivo.

int main () {

    //Cria o objeto do arquivo
    ofstream meuArquivo;

    //Abre o arquivo
    meuArquivo.open ("NomeDoArquivo.txt");

    //Esvazia o arquivo
    meuArquivo << "";

    //Fecha o arquivo
    meuArquivo.close();

    return 0;
}

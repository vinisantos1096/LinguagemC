#include <stdio.h>

typedef struct Data{

    int dia;
    int mes;
    int ano;
}Data;

struct Aluno{

    int id;
    Data nascimento;
};

int main () {

    //Criando Aluno
    struct Aluno aluno1;

    //Modificando Valores
    aluno1.id = 13;
    aluno1.nascimento.ano = 1999;
    aluno1.nascimento.mes = 04;
    aluno1.nascimento.dia = 16;

    //Imprimindo valores
    printf("Aluno Nascido em: %d / %d / %d ", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Definindo Variaveis
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    //Lendo tamanho pelo usu�rio
    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    //Alocando as linhas
    matriz = (int **) malloc(linhas * sizeof(int *));

    //Alocando mem�ria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    //Preenchendo valores e exibindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Libera mem�ria.
    free(matriz);

    return 0;

}

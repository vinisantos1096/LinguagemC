#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "Portuguese");
    float num1, num2;
    int opcao;
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);
    printf("\n============================\n");
    printf("\nO QUE VOCÊ DESEJA FAZER:\n");
    printf ("\nSOMAR digite 1: \n");
    printf ("\nSUBTRAIR digite 2: \n");
    printf ("\nDIVIDIR digite 3: \n");
    printf ("\nMULTIPLICAR digite 4: \n\n");
    scanf ("%d", &opcao);

    switch (opcao){
    case 1:
            printf ("\nA SOMA dos dois numeros é de : %.2f \n", num1 + num2);
        break;
    case 2:
            printf ("\nA SUBTRAÇÃO dos dois numeros é de : %.2f \n", num1 - num2);
        break;
    case 3:
            printf ("\nA DIVISÃO dos dois numeros é de : %.2f \n", num1 / num2);
        break;
    case 4:
            printf ("\nA MULTIPLICAÇÃO dos dois numeros é de : %.2f \n", num1 * num2);
        break;
    default:
            printf ("\nOpção Invalida!!!\n");
        break;
    }
    main ();
}

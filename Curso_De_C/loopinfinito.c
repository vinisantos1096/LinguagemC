// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>


/** Programa de conta com fun��es
 * e loop infinito **/

int main () {

     //Format��o de linguaguem
     setlocale(LC_ALL,"");

    //variaveis
    int cod1,cod2,cod3;
    int valor,soma,dividir,sub,resultado;
    char restart;

/**
definir constantes valor 0

(bug)
**/

    resultado = 0;
    soma = 0;
    dividir = 0;
    sub = 0;

    //gera�ao de numero aleatorio
    srand(time(NULL));
   valor = rand()%100 + 1;


   printf("N�mero aleatorio: %i\n\n", valor);

   printf("---------------------------------------------------|.\n");
   printf("\t\t*Verifia��o de decis�o*                  |.");
   printf("\n---------------------------------------------------|.");



   printf("\n\tdigite (1) para verdadeiro \n\tdigite (0) para falso\n");
   printf("---------------------------------------------------|.\n");

  printf("decida o que fazer com o n�mero gerado pelo sistema: %i", valor);


   printf("\n\nDeseja somar? \t\t|\t|condi��o 1|\n: ");
   scanf("%i",&cod1);



   printf("\n Deseja subtrair? \t|\t|condi��o 2|\n: ");
   scanf("%i",&cod2);

    printf("\n Deseja dividr? \t\t|\t|condi��o 3|\n: ");
   scanf("%i",&cod3);



     printf("\n---------------------------------------------------|.");

   /**Blocos de verifica��o
    * e calculos
    * do numero do sistema**/

   printf("\n\nValor do sistema: %i\n\n", valor);

   resultado = valor;
    if(cod1 == true)
    {
        printf("\t\n\n \t\t| SOMA | \n");
         printf("\nDigite o numero da soma: ");
         scanf("%i", &soma);

         printf( "%i + %i = ", valor, soma);
     resultado = soma+valor;
       printf( "%i", resultado);

    } else {
        printf("\n Usuario pulou a soma \n");
    }

        if(cod2 == true)
        {
               printf("\t\n\n \t\t| subtra��o |\n");
        printf("\n%i", resultado);
         printf("\nDigite o numero da subtra��o: ");
         scanf("%i", &sub);

          printf( "%i - %i = ", resultado, sub);
      resultado = resultado - sub;
       printf( "%i", resultado);

        }else {
        printf("\n Usuario pulou a subtra��o\n");
    }

         if(cod3 == true)
         {
              printf("\t\n\n \t\t| divis�o |\n");
        printf("\n%i", resultado);
         printf("\nDigite o numero da divis�o: ");
         scanf("%i", &dividir);

            printf( "%i / %i = ", resultado, dividir);
           resultado =  resultado/dividir;
            printf("%i", resultado);

         } else {
        printf("\n Usuario pulou a divis�o\n");
    }


           ///saida de verifica��o//**
          printf("\n---------------------------------------------------|.");



        if( cod1 == true && cod2 == true && cod3 == true)
        {

            printf("\n todas condi�oes verdadeiras ");

        }


          if( cod1 == false && cod2 == false && cod3 == false)
        {

            printf("\n todas condi�oes est�o falsas");

        }
         else if (( cod1 == true && cod2 == true && cod3 == true) == ( cod1 == false && cod2 == false && cod3 == false) )
         {
             printf("\n uma (ou duas) das condi�oes � falsa");
         }

           //Resultado final
            printf("\n---------------------------------------------------|.\n");

            printf("\t\n \t\t| Resultado |\n");

        printf("\n\t\tResultado (geral): %i", resultado);



          printf("\n---------------------------------------------------|.\n");


    //Reniciar o programa
     printf("\n\nDeseja reniciar o programa? \n");
    scanf("%i", &restart);

      if(restart == 1);
      {
           printf("\n\n---------------------------------------------------|.\n\n");
     printf("\n\n\t\tPROGRAMA RENICIADO");
      printf("\n\n---------------------------------------------------|.\n\n");
         main();
      }

    //Retornar
    return 0;
}

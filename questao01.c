/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 01-----------------------*/

#include <stdio.h>

#define TAM 100

int main(){

    int fila[TAM];
    int inicio = 0;
    int fim = -1;
    int opcao;
    int numero;

    do{

        printf("\n1 - Enfileirar número positivo");
        printf("\n2 - Desenfileirar e exibir múltiplos de 2");
        printf("\n3 - Encerrar");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:

                printf("Digite um número positivo: ");
                scanf("%d", &numero);

                if(numero > 0){

                    fim++;
                    fila[fim] = numero;

                }else{

                    printf("Número inválido!\n");
                }

            break;

            case 2:

                while(inicio <= fim){

                    if(fila[inicio] % 2 == 0){

                        printf("%d\n", fila[inicio]);
                    }

                    inicio++;
                }

                inicio = 0;
                fim = -1;

            break;

        }

    }while(opcao != 3);

    return 0;
}

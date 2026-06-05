/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 03-----------------------*/

#include <stdio.h>

#define TAM 100

int fila[TAM];

int inicio = 0;
int fim = 0;
int quantidade = 0;

void enfileirar(int valor){

    if(quantidade < TAM){

        fila[fim] = valor;

        fim = (fim + 1) % TAM;

        quantidade++;
    }
}

int desenfileirar(){

    int valor = fila[inicio];

    inicio = (inicio + 1) % TAM;

    quantidade--;

    return valor;
}

int main(){

    int opcao;
    int numero;

    do{

        printf("\n1 - Enfileirar");
        printf("\n2 - Desenfileirar e mostrar dobro");
        printf("\n3 - Desenfileirar tudo");
        printf("\n4 - Encerrar");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:

                printf("Digite um valor inteiro não nulo: ");
                scanf("%d", &numero);

                if(numero != 0){

                    enfileirar(numero);
                }

            break;

            case 2:

                if(quantidade > 0){

                    numero = desenfileirar();

                    printf("Dobro: %d\n", numero * 2);
                }

            break;

            case 3:

                while(quantidade > 0){

                    printf("%d\n", desenfileirar());
                }

            break;

        }

    }while(opcao != 4);

    return 0;
}

/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 04-----------------------*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAM 100

int main(){

    char texto[TAM];

    char filaA[TAM];
    int inicioA = 0;
    int fimA = -1;

    int filaB[TAM];
    int inicioB = 0;
    int fimB = 0;
    int quantidadeB = 0;

    printf("Digite uma sequência de caracteres: ");
    fgets(texto, TAM, stdin);

    for(int i = 0; texto[i] != '\0'; i++){

        if(isalpha(texto[i])){

            fimA++;
            filaA[fimA] = texto[i];
        }

        else if(isdigit(texto[i])){

            filaB[fimB] = texto[i] - '0';

            fimB = (fimB + 1) % TAM;

            quantidadeB++;
        }
    }

    printf("\nFila B (números):\n");

    while(quantidadeB > 0){

        printf("%d ", filaB[inicioB]);

        inicioB = (inicioB + 1) % TAM;

        quantidadeB--;
    }

    printf("\n\nFila A (letras):\n");

    while(inicioA <= fimA){

        printf("%c ", filaA[inicioA]);

        inicioA++;
    }

    return 0;
}

/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 02-----------------------*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

int main(){

    char texto[TAM];

    char fila[TAM];
    int inicio = 0;
    int fim = -1;

    char pilha[TAM];
    int topo = -1;

    printf("Digite uma sequência de caracteres: ");
    fgets(texto, TAM, stdin);

    for(int i = 0; texto[i] != '\0'; i++){

        fim++;
        fila[fim] = texto[i];
    }

    while(inicio <= fim){

        char caractere = fila[inicio];

        if(isalpha(caractere)){

            caractere = tolower(caractere);
        }

        topo++;
        pilha[topo] = caractere;

        inicio++;
    }

    printf("\nResultado:\n");

    while(topo >= 0){

        printf("%c", pilha[topo]);

        topo--;
    }

    return 0;
}

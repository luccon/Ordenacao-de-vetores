#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RG 100

int vetor[TAM];

int main () {
    srand(time(NULL));

    for (int i = 0; i < TAM; i++){
        vetor[i] = rand()%RG;
    }

    puts("Geração antes da ordenação:\n");
    for(int i = 0; i < TAM; i++){
        printf("%p - [%d] : [%d]\n",&vetor[i],i,vetor[i]);
    }

    int cont = 0;
    

    for (int i = 0; i < TAM/2; i++){                
                vetor[i] = vetor[i] ^ vetor[TAM-1-i];
                vetor[TAM-1-i] = vetor[i] ^ vetor[TAM-1-i];
                vetor[i] = vetor[i] ^ vetor[TAM-1-i];           
        cont++;
    }

    puts("Após a ordenação:\n");
    for(int i = 0; i < TAM; i++){
        printf("%p - [%d] : [%d]\n",&vetor[i],i,vetor[i]);
    }
    printf("O laço rodou %d vezes.\n",cont);
}
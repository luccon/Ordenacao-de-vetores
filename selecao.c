#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30
#define RG 100

int vetor[TAM];

int main (){
    srand(time(NULL));
    for (int i = 0; i < TAM; i++){
        vetor[i] = rand()%RG;
    }
    
}
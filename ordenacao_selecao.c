#include <stdio.h>
#include <stdlib.h>

int vetor[10] = {2,6,13,45,67,23,34,21,55,11};
int n = sizeof(vetor) / sizeof(vetor[0]);

int main () {
    for (int i = 0; i < n-1; i++){
        for(int k = i+1; k < n; k++){
            if (vetor[i] > vetor[k]){
                    vetor[i] = vetor[i] ^ vetor[k];
                    vetor[k] = vetor[i] ^ vetor[k];
                    vetor[i] = vetor[i] ^ vetor[k];
            }
        }
    }
    printf("a lista é: [");
        for(int i = 0; i < n; i++){
            printf("%d",vetor[i]);
            if(i<n-1){
                printf(",");
            }
        }
        printf("]");
}
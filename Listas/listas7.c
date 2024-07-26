#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10], i, maxi;

    for(i=0; i<10; i++){
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int maior = v[0];

    for(i=1; i<10; i++){
        if(v[i] > maior){
            maior = v[i];
            maxi = i;
        }
    }

    printf("Vetor:");
    for(i=0; i<10; i++){
        printf(" %d", v[i]);
        if(i<9){
            printf(",");
        }
    }

    printf("\nMaior valor do vetor: %d, na posicao: %d", maior, maxi);

    return 0;
}
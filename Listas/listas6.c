#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10];

    for(int i=0; i<10; i++){
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int menor = v[0], maior = v[0];

    for(int i=1; i<10; i++){
        if(v[i] < menor){
            menor = v[i];
        }
        if(v[i] > maior){
            maior = v[i];
        }
    }

    printf("Menor valor do vetor: %d\n", menor);
    printf("Maior valor do vetor: %d", maior);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    float V[10], Q[10];

    for(int i=0; i<10; i++){
        printf("Digite o valor de V[%d]: ", i);
        scanf("%f", &V[i]);
    }

    for(int i=0; i<10; i++){
        Q[i]=(V[i]*V[i]);
    }

    printf("Valores de V: ");
    for(int i=0; i<10; i++){
        printf("%.2f", V[i]);
        if(i<9){
            printf(", ");
        }
    }

    printf("\nQuadrado dos valores em V: ");
    for(int i=0; i<10; i++){
        printf("%.2f", Q[i]);
                if(i<9){
            printf(", ");
        }
    }

    return 0;
}
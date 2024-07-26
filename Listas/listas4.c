#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[8], x, y, soma;

    for(int i=0; i<8; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Digite a posicão X: ");
    scanf("%d", &x);
    printf("Digite a posicão Y: ");
    scanf("%d", &y);

    soma = (v[x] + v[y]);

    printf("Soma de V[x] e V[y]: %d", soma);

    return 0;
}
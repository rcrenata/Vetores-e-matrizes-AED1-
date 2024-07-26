#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[10], contador = 0;

    for(int i=0; i<10; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(int i=0; i<10; i++){
        if(v[i] % 2 == 0){
            contador+=1;
        }
    }

    printf("O vetor possui %d valores pares.", contador);

    return 0;
}
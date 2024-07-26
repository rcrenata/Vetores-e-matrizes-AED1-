#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6];
    for(int i=0; i<6; i++){
        printf("Digite o valore de A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("Vetor A:");
    for(int i=0; i<6; i++){
        printf(" %d", A[i]);
        if(i<5){
            printf(",");
        }
    }

    return 0;
}
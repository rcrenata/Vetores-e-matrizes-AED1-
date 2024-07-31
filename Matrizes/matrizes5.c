#include <stdio.h>

int main(){
    int m[5][5], x, a = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for(int i = 0; i<5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite o valor de m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i<5; i++){
        for(int j = 0; j < 5; j++){
            if(m[i][j]==x){
                a = 1;
                printf("X está em m[%d][%d].", i, j);
            }
        }
    }

    if(a==0){
        printf("Valor não encontrado na matriz.");
    }

    return 0;
}
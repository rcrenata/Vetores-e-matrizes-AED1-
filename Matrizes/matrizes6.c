#include <stdio.h>

int main(){
    int m1[4][4], m2[4][4], m3[4][4];

    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor de m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor de m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    printf("matriz 3 com os maiores valores de cada matriz:\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            if((m1[i][j])>(m2[i][j])){
                m3[i][j] = m1[i][j];
            }
            else{
                m3[i][j] = m2[i][j];
            }
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
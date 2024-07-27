#include <stdio.h>

int main(){
    int m[4][4], imax, jmax;

    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o valor de m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    imax = 0;
    jmax = 0;
    
    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            if(m[i][j]>m[imax][jmax]){;
                imax = i;
                jmax = j;
            }
        }
    }

    printf("Matriz:\n");
    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Maior elemento da matriz em: m[%d][%d]", imax, jmax);

    return 0;
}
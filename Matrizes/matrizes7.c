#include <stdio.h>

int main(){
    int m[10][10];

    printf("matriz:\n");

    for(int i = 0; i<10; i++){
        for(int j = 0; j < 10; j++){
            if(i<j){
                m[i][j] = (2*i + 7*j - 2);
            }
            else if(i=j){
                m[i][j] = (3*(i*i) - 1);
            }
            else if(i>j){
                m[i][j] = (4*(i*i*i) - 5*(j*j) + 1);
            }

            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
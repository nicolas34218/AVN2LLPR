#include <stdio.h>

int main(){
    int A, X[4][5];

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            scanf("%d", &X[i][j]);
        }
    }

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            A += X[i][j];
        }
    }
    printf("%d", A);
    return 0;
}
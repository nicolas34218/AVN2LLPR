#include <stdio.h>

int main(){
    int N, X[N];
    scanf("%d", N);

    for (int i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    for (int i=0; i<N; i++){
        if(X[i] % 3 == 0){
            printf("$d", X[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int isUnique(int arData[10000], int N){
    int i = 0, i2 = 0;
    int cnt = 0;
    while (i < N){
        while (i2 < N){
            if (arData[i2] == arData[i]){
                cnt++;
            }
            i2++;
        }
        i2 = 0;
        i++;
    }
    if (cnt == N){
        return 1;
    }
    else {
        return 0;
    }
}

void main(){
    int N; scanf("%d", &N);
    int arData[10000];
    int i = 0;
    while (i < N){
        scanf("%d", &arData[i]);
        i++;
    }
    printf("%d", isUnique(arData, N));
    return 0;
}

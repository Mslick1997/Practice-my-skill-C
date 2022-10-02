#include <stdio.h>
#include <limits.h>

int Find_Max(int arData[10000], int N){
    int i = 0;
    int cnt = 0;
    int max = INT_MIN;
    while (i < N){
        if (max <= arData[i]){
            max = arData[i];
        }
        i++;
    }
    i = 0;
    while (i < N){
        if (max == arData[i]){
            cnt++;
        }
        i++;
    }
    return cnt;
}

void main(){
    int N; scanf("%d", &N);
    int arData[10000];
    int i = 0;
    while (i < N){
        scanf("%d", &arData[i]);
        i++;
    }
    printf("%d", Find_Max(arData, N));
}

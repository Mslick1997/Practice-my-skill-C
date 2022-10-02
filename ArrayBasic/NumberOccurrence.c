#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int number[N];
    int i = 1;
    int i2 = 1;
    int x;
    int cnt = 0;
    int cnt0 = 0;
    while (i <= N){
        scanf("%d", &number[i]);
        i++;
    }
    scanf("%d", &x);
    i = 1;
    while (i <= N){
        cnt++;
        if (number[i] == x){
            printf("%d ", cnt);
        }
        else if (number[i] != x){
            cnt0++;
        }
        i++;
    }
    if (cnt0 == N){
        printf("0");
    }
    return 0;
}

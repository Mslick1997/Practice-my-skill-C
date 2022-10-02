#include <stdio.h>

void derivative(int num[100], int ans[100], const int N){
    int i = 0;
    while (i < N){
        ans[i] = num[i] - num[i - 1];
        ans[0] = 0;
        printf("%d ", ans[i]);
        i++;
    }
}

void main(){
    int N; scanf("%d", &N);
    int i = 0;
    int ans[100];
    int num[100];
    while (i < N){
        scanf("%d", &num[i]);
        i++;
    }
    derivative(num, ans, N);
}

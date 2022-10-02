#include <stdio.h>

void main(){
    int N;
    int i = 1;
    int i2 = 1;
    int number;
    scanf("%d",&N);
    int A[N];
    while (i <= N){
        scanf("%d", &A[i]);
        i++;
    }
    while (i - 1 >= 1){
        printf("%d ", A[i - 1]);
        i--;
    }
    return 0;
}

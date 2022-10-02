#include <stdio.h>

void main(){
    int N;
    int row = 0, col = 0;
    scanf("%d", &N);
    while (row < N){
        while (col < N){
            if(col >= row) {
                printf("%d", (N - row)%10);
            }
            else {
                printf(" ");
            }
            ++col;
        }
        ++row;
        N = N - 1;
        printf("\n");
    }
    return 0;
}

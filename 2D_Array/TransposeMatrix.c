#include <stdio.h>

void main(){
    int R, C;
    scanf("%d%d", &R, &C);
    int A[5][5];
    int row = 1, col = 1;
    while (row <= R){
        while (col <= C){
            scanf("%d", &A[row][col]);
            col++;
        }
        col = 1;
        row++;
    }
    row = 1, col = 1;
    while (col <= C){
        while (row <= R){
            printf("%d ", A[row][col]);
            row++;
            if (row > R){
                printf("\n");
            }
        }
        row = 1;
        col++;
    }
    return 0;
}

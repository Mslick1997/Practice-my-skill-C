#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int number[100][100];
    int row = 1, col = 1;
    int i = 0, i2 = 1;
    int sum = 0, S = 0;
    while (row <= N){
        while (col <= N){
            scanf("%d", &number[row][col]);
            col++;
        }
        col = 1;
        row++;
    }
    /*while (row <= N){
        while (col <= N){
            printf("%d ", number[row][col]);
            col++;
            if (col > N){
                printf("\n");
            }
        }
        col = 1;
        row++;
    */
    row = 1, col = 1;
    while (i <= N - 2){
        while (i2 <= N - 1){
            if (number[row + i][col + i2] != number[row + i2][col + i]){
                sum = number[row + i][col + i2] - number[row + i2][col + i];
                if (sum < 0){
                    sum *= -1;
                }
                S += sum;
                //printf("(%d - %d)", number[row + i][col + i2], number[row + i2][col + i]);
            }
            number[row + i][col + i2] = 0;
            number[row + i2][col + i] = 0;
            i2++;
        }
        i2 = 1;
        i++;
    }
    printf("%d", S);
    return 0;
}

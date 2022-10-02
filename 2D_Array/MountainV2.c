#include <stdio.h>

int angry[1000][1000];
int YODD[1000000], RYODD[1000000], CYODD[1000000]; 
void main(){
    int N; scanf("%d", &N);
    int row = 0, col = 0;
    while (row < N){
        while (col < N){
            scanf("%d", &angry[row][col]);
            col++;
        }
        col = 0;
        row++;
    }
    row = 1, col = 1;
    int three1 = 3, three2 = 3;
    int i = 0, i2 = 0;
    int gummad = 0;
    int cntM = 0;
    while (row <= N - 2){
        //printf("%d %d\n", i2, three2);
        while (col <= N - 2){
            while (i < three1){
                while (i2 < three2){
                    if (angry[row][col] > angry[i][i2]){
                        gummad++;
                        //printf("(%d %d), ", angry[row][col], angry[i][i2]);
                    }
                    i2++;
                }
                i++;
                i2 = col - 1;
            }
            if (gummad == 8){
                cntM++;
                YODD[cntM] = angry[row][col];
                RYODD[cntM] = row;
                CYODD[cntM] = col;
            }
            i = row - 1;
            i2 = col;
            three2++;
            col++;
            //printf("%d\n", gummad);
            //printf("%d\n", cntM);
            gummad = 0;
        }
        i2 = 0;
        i = row;
        three1++;
        three2 = 3;
        col = 1;
        row++;
    }
    i = 1, i2 = 1;
    printf("%d\n", cntM);
    while (i <= cntM){
        printf("%d %d %d", YODD[i], RYODD[i], CYODD[i]);
        if (i == cntM){
            break;
        }
        printf("\n");
        i++;
    }
}

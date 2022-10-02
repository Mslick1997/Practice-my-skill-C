#include <stdio.h>

int num[1000][1000];

void main(){
    int N; scanf("%d", &N);
    int row = 0, col = 0;
    int i = 0, i2 = 0;
    int cnt = 0, cntMountain = 0;
    int yodd[1000], Ryodd[1000], Cyodd[1000];
    while (row < N){
        while (col < N){
            scanf("%d", &num[row][col]);
            col++;
        }
        col = 0;
        row++;
    }
    row = 1, col = 1;
    while (row <= N - 2){
        while (col <= N - 2){
            while (i < 3){
                while (i2 < 3){
                    if (num[row][col] == num[i][i2] || num[row][col] < num[i][i2]){
                        cnt++;
                        //printf("(%d %d) ", num[row][col], num[i][i2]);
                        //printf("(%d)\n", cnt);
                    }
                    i2++;
                }
                i2 = 0;
                i++;
            }
            //printf("(%d) ", cnt);
            if (cnt == 1){
                cntMountain++;
                yodd[cntMountain] = num[row][col];
                //printf("(%d)", num[row][col]);
                Ryodd[cntMountain] = row, Cyodd[cntMountain] = col;
            }
            i = 0;
            cnt = 0;
            col++;
        }
        col = 1;
        row++;
    }
    ///OUTPUT
    i = 1, i2 = 1;
    printf("%d\n", cntMountain);
    while (i <= cntMountain){
        printf("%d %d %d\n", yodd[i], Ryodd[i], Cyodd[i]);
        i++;
    }
}

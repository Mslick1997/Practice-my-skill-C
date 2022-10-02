#include <stdio.h>

void main(){
    int Row, Col; scanf("%d %d", &Row, &Col);
    int r = 0, c = 0;
    int minR = 999999999, maxR = -999999999;
    int minC = 999999999, maxC = -999999999;
    int Good[Row], Bad[Row], Great[Col], Nope[Col];
    int cnt = 0;
    int RC[Row][Col];
    ///INPUT AND CHECK MAX-Row MIN-Row
    while (r < Row){
        while (c < Col){
            scanf("%d", &RC[r][c]);
            if (maxR <= RC[r][c]){
                maxR = RC[r][c];
            }
            if (minR >= RC[r][c]){
                minR = RC[r][c];
            }
            c++;
        }
        Good[r] = maxR;
        Bad[r] = minR;
        minR = 999999999;
        maxR = -999999999;
        c = 0;
        r++;
    }
    ///CHECK MAX-Col MIN-Col
    r = 0, c = 0;
    while (c < Col){
        while (r < Row){
            if (maxC <= RC[r][c]){
                maxC = RC[r][c];
            }
            if (minC >= RC[r][c]){
                minC = RC[r][c];
            }
            r++;
        }
        Great[c] = maxC;
        Nope[c] = minC;
        //printf("(%d)(%d)\n", Great[c], Nope[c]);
        minC = 999999999;
        maxC = -999999999;
        r = 0;
        c++;
    }
    ///OUTPUT
    r = 0, c = 0;
    while (r < Row){
        while (c < Col){
            if (Good[r] == Nope[c]){
                printf("(%d, %d) = %d\n", r, c, Good[r]);
                cnt++;
            }
            if (Bad[r] == Great[c]){
                printf("(%d, %d) = %d\n", r, c, Bad[r]);
                cnt++;
            }
            c++;
        }
        c = 0;
        r++;
    }
    if (cnt == 0){
        printf("None");
    }
    return 0;
}

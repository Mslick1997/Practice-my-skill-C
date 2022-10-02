#include <stdio.h>

void main(){
    int M, N;
    int K;
    int r = 1, c = 1;
    int cntR = 0, cntC = 0;
    scanf("%d %d", &M, &N);
    int rc[M][N];
    scanf("%d", &K);
    while (r <= M){
        while (c <= N && cntC < N){
            scanf("%d", &rc[r][c]);
            printf("%d", cntC);
            cntC++;
            c++;
        }
        c = 1;
        cntR++;
        r++;
    }
    printf("%d %d", cntR, cntC);
    return 0;
}

#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);

    int scoreA[N];
    int scoreB[N];
    int i = 1;
    int i2 = 1;
    int cntB = 0;
    int cntA = 0;
    int A, B;
    while (i <= N){
        scanf("%d", &scoreA[i]);
        i++;
    }
    while (i2 <= N){
        scanf("%d", &scoreB[i2]);
        i2++;
    }
    //printf("%d %d", scoreA[i], scoreB[i2]);
    i--;
    i2--;
    A = i;
    B = i2;
    //printf("%d %d", scoreB[i2 - ((B - 3) - 1)], scoreA[i - ((A - 3) - 1)]);
    while (i2 >= i2 - (B - 1) && i >= i - (A - 1)){
        if (scoreA[i - (A - 1)] > scoreB[i2 - (B - 1)]){
            cntA += 2;
        }
        else if (scoreB[i2 - (B - 1)] > scoreA[i - (A - 1)]){
            cntB += 2;
        }
        else if (scoreB[i2 - (B - 1)] == scoreA[i - (A - 1)]){
            cntB++;
            cntA++;
        }
        A--;
        B--;
    }
    if (cntA > cntB){
        printf("Team 1 wins\nScore %d to %d", cntA, cntB);
    }
    else if (cntB > cntA){
        printf("Team 2 wins\nScore %d to %d", cntB, cntA);
    }
    else {
        printf("Draw game\nScore %d to %d", cntA, cntB);
    }
    return 0;
    /*5
1 2 3 1 4
3 9 3 5 6*/
}

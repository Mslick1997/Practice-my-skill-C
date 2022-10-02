#include <stdio.h>
void main(){
    int R, C, i = 1, i2 = 1, cnt = 1, sum;
    scanf("%d%d", &R, &C);
    sum = R * C;
    while (i <= R){
        while (i2 <= C && cnt <= sum){
            printf("%d ", cnt);
            cnt++;
            i2++;
            if (i2 > C){
                printf("\n");
            }
        }
        i2 = 1;
        i++;
    }
    return 0;
}

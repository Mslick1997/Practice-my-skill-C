#include <stdio.h>

void main(){
    int K, N; scanf("%d %d", &K, &N);
    int number;
    int i = 1;
    int cnt = 0;
    int max = -9999999, min = 9999999;
    int round;
    while (i <= N){
        while (1){
            scanf("%d", &number);
            if (number == 0){
                break;
            }
            if (number % K == 0 && number >= 0){
                cnt++;
            }
        }
        if (max <= cnt){
            max = cnt;
            round = i;
        }
        cnt = 0;
        i++;
    }
    printf("%d %d", round, max);
    return 0;
}

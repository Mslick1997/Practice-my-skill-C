#include <stdio.h>

void main(){
    int K, N;
    int i = 1;
    int number;
    int cnt = 0;
    int cnt1 = 0;
    int max = -999999999;
    int shoot;
    scanf("%d%d", &K, &N);
    while (i <= N){
        scanf("%d", &number);
        if (number == 0){
            i++;
            cnt++;
            if (max <= cnt1){
                max = cnt1;
                shoot = cnt;
            }
            cnt1 = 0;
        }
        if (number > 0 && number % K == 0){
            cnt1++;
        }
    }
    printf("%d %d", shoot, max);
    return 0;
}

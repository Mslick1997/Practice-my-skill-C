#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int range; scanf("%d", &range);
    int number[N];
    int i = 1, i2 = 1, i3 = 1;
    int sum = 0;
    int R;
    int max = -9999999;
    while (i <= N){
        scanf("%d", &number[i]);
        i++;
    }
    i = 1;
    R = 1 + range + range;
    while (i2 <= N - (range + range)){
        while (i <= R){
            sum = sum + number[i];
            i++;
        }
        if (max < sum){
            max = sum;
        }
        sum = 0;
        i = 1 + i2;
        R++;
        i2++;
    }
    printf("%d", max);
    return 0;
}

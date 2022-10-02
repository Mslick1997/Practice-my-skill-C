#include <stdio.h>

void main(){
    int N;
    int i = 1;
    int number;
    int sum = 0;
    int cnt = 0;
    int max = -9999999999, min = 9999999999;
    int rob, rob2;
    double sumA = 0;
    while (1){
        scanf("%d", &N);
        if (N <= 0){
            break;
        }
        cnt++;
        while (i <= N){
            scanf("%d", &number);
            sum += number;
            i++;
        }
        if (max < sum){
            max = sum;
            rob = cnt;
        }
        if (min > sum){
            min = sum;
            rob2 = cnt;
        }
        printf("%d\n", sum);
        //printf("(%d)", min);
        sumA += sum;
        sum = 0;
        i = 1;
    }
    printf("%d %d\n", rob, max);
    printf("%d %d\n", rob2, min);
    printf("%.2f", (sumA / cnt));
    return 0;
}

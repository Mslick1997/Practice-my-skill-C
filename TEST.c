#include <stdio.h>

void main(){
    int N; scanf("%d", &N);
    int number[N];
    int i = 1;
    int i2 = 1
    int max = -9999999;
    int min = 9999999;
    int maxx;
    int ma;
    while (i <= N){
        scanf("%d", &number[i]);
        if (max < number[i]){
            max = number[i];
        }
        if (min > number[i]){
            min = number[i];
        }
        i++;
    }
    i = 1;
    maxx = max;
    while (i2 <= N){
        if (maxx - number[i] != 0){
            while (max > maxx - number[i]){
                max = maxx - number[i];
                ma = number[i];
            }
        }
        i2++;
    }
    printf("%d %d", ma, min);
    return 0;
}

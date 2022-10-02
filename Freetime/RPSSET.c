#include <stdio.h>

void main(){
    int N;
    int number[10000];
    int i = 1, i2 = 1, i3 = 1;
    int cnt1 = 0, cnt2 = 0;
    scanf("%d", &N);
    if (N >= 2 && N <= 5000){
        while (i2 <= N * 2){
            scanf("%d", &number[i2]);
            i2++;
        }
    }
    i2 = 1;
    while (i2 <= N){
        if (number[i2] > number[i2 + N]){
            cnt1++;
        }
        else if (number[i2 + N] > number[i2]){
            cnt2++;
        }
        i2++;
    }
    if (cnt1 > cnt2){
        printf("%d %d\n1", cnt1, cnt2);
    }
    else if (cnt2 > cnt1){
        printf("%d %d\n2", cnt1, cnt2);
    }
    else {
        printf("%d %d\n0", cnt1, cnt2);
    }
    return 0;
}

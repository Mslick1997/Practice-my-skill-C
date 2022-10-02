#include <stdio.h>

void main(){
    int K;
    int number;
    int cnt = 0;
    int hann = 0;
    int sum = 0;
    scanf("%d", &K);
    while (1){
        scanf("%d", &number);
        if (number == 0){
            break;
        }
        if (number >= 0 && number % K == 0){
            hann++;
            sum += number;
        }
        cnt++;
    }
    printf("%d\n%d\n%d", cnt, hann, sum);
    return 0;
}

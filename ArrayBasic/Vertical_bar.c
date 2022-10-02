#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);
    int number[N];
    int max = 0;
    int i = 1, i2 = 1;
    while (i <= N){
        scanf("%d", &number[i]);
        if (max < number[i]){
            max = number[i];
        }
        i++;
    }
    i = max;
    while (i >= 1){
        while (i2 <= N){
            if (number[i2] < i){
                printf(" ");
            }
            else if (number[i2] >= i){
                printf("*");
            }
            i2++;
        }
        i2 = 1;
        i--;
        printf("\n");
    }
    return 0;
}

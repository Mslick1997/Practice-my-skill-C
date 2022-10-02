#include <stdio.h>

void main(){
    int N;
    int x;
    int i = 1, i2 = 1;
    scanf("%d", &N);
    while (i <= N){
        scanf("%d", &x);
        while (i2 <= x && x % 2 == 0){
            printf("#");
            i2++;
            if (i2 > x){
                printf("\n");
            }
        }
        while (i2 <= x && x % 2 != 0){
            printf("*");
            i2++;
            if (i2 > x){
                printf("\n");
            }
        }
        i2 = 1;
        i++;
    }
    return 0;
}

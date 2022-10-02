#include <stdio.h>
void main(){
    int R, C, i = 1, i2 = 1;
    scanf("%d%d", &R, &C);
    while (i <= R){
        while (i2 <= C){
            printf("*");
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

#include <stdio.h>
void main(){
    int R, C, i = 0, i2 = 0;
    scanf("%d%d", &R, &C);
    while (i <= R){
        while (i2 <= C){
            printf("(%d, %d) ", i, i2);
            i2++;
            if (i2 > C){
                printf("\n");
            }
        }
        i2 = 0;
        i++;
    }
    return 0;
}

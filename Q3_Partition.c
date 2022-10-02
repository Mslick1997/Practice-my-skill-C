#include <stdio.h>

void main(){
    int W, N;
    int i = 1;
    int i2 = 1;
    int i3 = 1;
    int i4 = 1;
    int i5 = 1;
    scanf("%d%d", &W, &N);
    while (i <= 3){
        if (i == 1){
            while (i2 <= W * N + N + 1){
                printf("*");
                i2++;
                if (i2 > W * N + N + 1){
                    printf("\n");
                }
            }
        }
        if (i == 2){
            while (i3 <= N + 1){
                printf("*");
                i3++;
                if (i3 > 1 && i3 <= N + 1){
                    while (i4 <= W){
                        printf(" ");
                        i4++;
                    }
                }
                if (i3 > N + 1){
                    printf("\n");
                }
                i4 = 1;
            }
        }
        if (i == 3){
            while (i5 <= W * N + N + 1){
                printf("*");
                i5++;
            }
        }
        i++;
    }
    return 0;
}

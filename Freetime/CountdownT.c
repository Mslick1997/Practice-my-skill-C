#include <stdio.h>

void main(){
    int N;
    int i = 1, i2 = 1, i3 = 1;
    int kebN;
    scanf("%d", &N); kebN = N;
    while (i <= N){
        if (N <= 9){
            while (i2 <= kebN){
                printf("%d", kebN);
                i2++;
                if (i2 > kebN){
                    printf("\n");
                }
            }
        }
        if (N >= 10){
            while (i2 <= kebN){
                printf("%d", kebN % 10);
                i2++;
                if (i2 > kebN){
                    printf("\n");
                }
            }
        }
        if (i == N){
            break;
        }
        while (i3 <= i){
            printf(" ");
            i3++;
        }
        kebN--;
        i3 = 1;
        i2 = 1;
        i++;
    }
    return 0;
}

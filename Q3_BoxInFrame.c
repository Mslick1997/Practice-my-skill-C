#include <stdio.h>

void main(){
    int N;
    int i = 1;
    int i2 = 1;
    int i3 = 1;
    int i4 = 1;
    int i5 = 1;
    scanf("%d", &N);
    while (i <= N && N >= 7 && N <= 1000){
        printf("*");
        if (i == 2){
            while (i3 <= N - 2){
                printf(" ");
                i3++;
                if (i3 > N - 2){
                    printf("*\n");
                }
            }
            i3 = 1;
        }
        if (i >= 3 && i <= N - 2){
            printf(" ");
            while (i5 <= N - 4){
                printf("*");
                i5++;
                if (i5 > N - 4){
                    printf(" *\n");
                }
            }
            i5 = 1;
        }
        if (i == N - 1){
            while (i3 <= N - 2){
                printf(" ");
                i3++;
                if (i3 > N - 2){
                    printf("*\n");
                }
            }
        }
//LAST \n
        if (i == N){
            while (i4 <= N - 1){
                printf("*");
                i4++;
            }
        }
        while (i2 <= (N - 1)){
            printf("*");
            i2++;
            if (i2 > (N - 1)){
                printf("\n");
            }
        }
        i++;
    }
    //printf("%d", i2);
    return 0;
}

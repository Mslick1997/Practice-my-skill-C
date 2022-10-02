#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int i = 1, i2 = 1, i3 = 1, i4 = 1, i5 = 1;
    while (i <= N){
        printf("*");
        i++;
        if (i > N){
            printf("\n");
        }
    }
    while (i2 <= N - 2){
        printf("* ");
        while (i3 <= N - 3){
            printf(" ");
            i3++;
            if (i3 > N - 3){
                printf("*\n");
            }
        }
        if (i2 >= 2 && i2 <= N - 3){
            while (i4 <= N - 4){
                printf("*");
                i4++;
                if (i4 > N - 4){
                    printf(" *\n");
                }
            }
            i4 = 1;
        }
        i2++;
        if (i2 > N - 2){
            while (i5 <= N - 3){
                printf(" ");
                i5++;
                if (i5 > N - 3){
                    printf("*\n");
                }
            }
        }
    }
    i = 1;
    while (i <= N){
        printf("*");
        i++;
    }
    return 0;
}

#include <stdio.h>

void main(){
    int N;
    int i = 1;
    int i2 = 1;
    int i3 = 1;
    int i4 = 1;
    int i5 = 1;
    scanf("%d", &N);
    if (N >= 6 && N <= 300 && N % 3 == 0){
        while (i4 <= N / 3){
            while (i <= 3){
                while (i2 <= N / 3){
                    printf("*  ");
                    i2++;
                    if (i2 > N / 3){
                        printf("\n");
                    }
                }
                while (i3 <= i && i <= 2){
                    printf(" ");
                    i3++;
                }
                i2 = 1;
                i3 = 1;
                i++;
            }
        i = 1;
        i4++;
        }
    }
    //printf("CHECK");
    return 0;
}

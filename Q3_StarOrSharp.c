#include <stdio.h>

void main(){
    int N;
    int number;
    int i = 1;
    int i2 = 1;
    scanf("%d", &N);
    while (i <= N){
        scanf("%d", &number);
        if (number % 2 != 0){
            while (i2 <= number){
                printf("*");
                i2++;
                if (i2 > number){
                    printf("\n");
                }
            }
            i2 = 1;
        }
        else if (number % 2 == 0){
            while (i2 <= number){
                printf("#");
                i2++;
                if (i2 > number){
                    printf("\n");
                }
            }
            i2 = 1;
        }
        i++;
    }
    return 0;
}

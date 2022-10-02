#include <stdio.h>

int main(){
    int number;
    int i = 1;
    int i2 = 1;
    int i3 = 1;
    int i4 = 1;
    int i5 = 1;
    int i6 = 1;
    int i7 = 1;
    int space = 2;
    int kko;
    scanf("%d", &number);
    kko = number;
//TOP *****
    while (i <= number / 2){
        while (i2 <= kko / 2){
            printf(" ");
            i2++;
            while (i2 > kko / 2 && i3 <= space - 1){
                printf("*");
                i3++;
                if (i3 > space - 1){
                    printf("\n");
                }
            }
        }
        space = space + 2;
        kko = kko - 2;
        i3 = 1;
        i2 = 1;
        i++;
    }
//MID *****
    while (i4 <= number){
        printf("*");
        i4++;
        if (i4 > number){
            printf("\n");
        }
    }
//UNDER *****
    kko = number - (number - 1);
    space = space - 2;
    while (i7 <= number / 2){
        while (i5 <= kko){
            printf(" ");
            i5++;
            while (i5 > kko && i6 <= space - 1){
                printf("*");
                i6++;
                if (i6 > space - 1){
                    printf("\n");
                }
            }
        }
        space = space - 2;
        kko = kko + 1;
        i6 = 1;
        i5 = 1;
        i7++;
    }
    //printf("%d", space);
    return 0;
}

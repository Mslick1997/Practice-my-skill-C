#include <stdio.h>

void main(){
    int number[501];
    int cnt = 0;
    int i = 1, i2 = 1, i3 = 1, i4 = 1, i5 = 1;
    int space;
    while (1){
        scanf("%d", &number[i]);
        if (number[i] < 0 || number[i] >= 10){
            break;
        }
        cnt++;
        i++;
    }
    i = 1;
    //printf("%d", cnt);
    space = cnt - 1;
    while (i2 <= cnt){
        while (i3 <= space){
            printf(" ");
            i3++;
        }
        while (i4 <= i5){
            printf("%d", number[i]);
            i4++;
            if (i4 > i5){
                printf("\n");
            }
        }
        i4 = 1;
        space--;
        i3 = 1;
        i++;
        i5++;
        i2++;
    }
    return 0;
}

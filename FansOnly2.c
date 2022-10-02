#include <stdio.h>
void main(){
    int number, cnt_p = 0, cnt_n = 0, cnt_4 = 0, rate, box_4 = 0;
    while (1){
        scanf("%d", &number);
        if (number == -1){
            break;
        }
        if (number == 4){
            cnt_4++;
            cnt_p++;
            cnt_n++;
            if (box_4 < cnt_p){
                box_4 = cnt_p;
            }
        }
        else {
            cnt_p = 0;
            cnt_n++;
        }
        rate = (cnt_4 * 100) / cnt_n;
    }
    if (rate >= 60 && box_4 >= 3){
        printf("The user was banned");
    }
    else if (rate >= 60 || box_4 >= 3){
        printf("The user was warned");
    }
    else {
        printf("Pass");
    }
    return 0;
}

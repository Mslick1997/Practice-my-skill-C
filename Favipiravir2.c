#include <stdio.h>
void main(){
    int Stock_Fav, Stock_Jone, N, i = 1, weight, oxy, give_fav, give_jone;
    int total_fav, total_jone;
    float temp;
    scanf ("%d%d", &Stock_Fav, &Stock_Jone);
    scanf("%d", &N);
    while (i <= N){
        scanf("%d%f%d", &weight, &temp, &oxy);
        if (temp >= 37.5 && oxy < 90){
            give_fav = 3 * (weight / 1);
            give_jone = (4 * give_fav) + 120;
            total_fav = Stock_Fav - give_fav;
            total_jone = Stock_Jone - give_jone;
            if (total_fav >= 0 && total_jone >= 0){
                printf("OK\n");
            }
            if (total_fav >= 0 && total_jone < 0){
                printf("No capsule\n");
            }
            if (total_jone >= 0 && total_fav < 0){
                printf("No Favipiravir\n");
            }
            if (total_fav < 0 && total_jone < 0){
                printf("Not enough both\n");
            }
            if (total_fav >= 0){
                Stock_Fav = total_fav;
            }
            if (total_jone >= 0){
                Stock_Jone = total_jone;
            }
            //printf("case1 %d %d\n", Stock_Fav, Stock_Jone);
        }
        else if (temp >= 37.5 && oxy >= 90){
            give_fav = 2 * (weight / 1);
            give_jone = (4 * give_fav) + 120;
            total_fav = Stock_Fav - give_fav;
            total_jone = Stock_Jone - give_jone;
            if (total_fav >= 0 && total_jone >= 0){
                printf("OK\n");
            }
            if (total_fav >= 0 && total_jone < 0){
                printf("No capsule\n");
            }
            if (total_jone >= 0 && total_fav < 0){
                printf("No Favipiravir\n");
            }
            if (total_fav < 0 && total_jone < 0){
                printf("Not enough both\n");
            }
            if (total_fav >= 0){
                Stock_Fav = total_fav;
            }
            if (total_jone >= 0){
                Stock_Jone = total_jone;
            }
            //printf("case2 %d %d\n", Stock_Fav, Stock_Jone);
        }
        else if (temp < 37.5 && oxy < 90){
            give_fav = 2 * (weight / 1);
            give_jone = (4 * give_fav) + 120;
            total_fav = Stock_Fav - give_fav;
            total_jone = Stock_Jone - give_jone;
            if (total_fav >= 0 && total_jone >= 0){
                printf("OK\n");
            }
            if (total_fav >= 0 && total_jone < 0){
                printf("No capsule\n");
            }
            if (total_jone >= 0 && total_fav < 0){
                printf("No Favipiravir\n");
            }
            if (total_fav < 0 && total_jone < 0){
                printf("Not enough both\n");
            }
            if (total_fav >= 0){
                Stock_Fav = total_fav;
            }
            if (total_jone >= 0){
                Stock_Jone = total_jone;
            }
            //printf("case3 %d %d\n", Stock_Fav, Stock_Jone);
        }
        else {
            give_fav = 0;
            give_jone = (4 * give_fav) + 120;
            total_fav = Stock_Fav - give_fav;
            total_jone = Stock_Jone - give_jone;
            if (total_jone >= 0){
                printf("OK\n");
            }
            if (total_fav >= 0 && total_jone < 0){
                printf("No capsule\n");
            }
            if (total_jone >= 0 && total_fav < 0){
                printf("No Favipiravir\n");
            }
            if (total_fav < 0 && total_jone < 0){
                printf("Not enough both\n");
            }
            if (total_fav >= 0){
                Stock_Fav = total_fav;
            }
            if (total_jone >= 0){
                Stock_Jone = total_jone;
            }
            //printf("case4 %d %d\n", Stock_Fav, Stock_Jone);
        }
        i++;
    }
    printf("%d %d", Stock_Fav, Stock_Jone);
    return 0;
}

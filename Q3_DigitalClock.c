#include <stdio.h>

void main(){
    int startH, startM, stopH, stopM;
    scanf("%d%d%d%d", &startH, &startM, &stopH, &stopM);
    while (startH <= stopH){
        while (startM <= 59 && startH < stopH){
            if (startM < 10){
                printf("%d:0%d\n", startH, startM);
                startM++;
            }
            else {
                printf("%d:%d\n", startH, startM);
                startM++;
            }
        }
        while (startH == stopH && startM <= stopM){
            if (startM < 10){
                printf("%d:0%d\n", startH, startM);
                startM++;
            }
            else {
                printf("%d:%d\n", startH, startM);
                startM++;
            }
        }
        startM = 0;
        startH++;
    }
    return 0;
}

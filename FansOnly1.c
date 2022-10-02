#include <stdio.h>
void main(){
    int type, i = 1;
    double percent, cnt = 0, cntN = 0;
    while (1){
        scanf("%d", &type);
        if (type == -1){
            break;
        }
        else if (type == 1 || type == 2 || type == 3){
            cntN++;
        }
        else if (type == 4){
            cntN++;
            cnt++;
        }
        while (i <= cnt){
            printf("Alert!! Porn contents\n");
            i++;
        }
    }
    percent = ((cnt / cntN) * 100);
    if (percent >= 60){
        printf("The user was banned\n");
    }
    return 0;
}

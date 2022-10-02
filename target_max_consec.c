#include <stdio.h>
void main(){
    int N, number, cnt = 0, cntN = 0, Nabsum = 0;
    scanf("%d", &N);
    while (1){
        scanf("%d", &number);
        if (number == 0){
            break;
        }
        else if (number == N){
            cnt++;
            cntN++;
            if (Nabsum < cntN){
                Nabsum = cntN;
            }
        }
        else if (number != N){
            cntN = 0;
        }
    }
    printf("%d\n%d", Nabsum, cnt);
    return 0;
}

#include <stdio.h>

void main(){
    int S1;
    int S2;
    int T1;
    int T2;
    scanf("%d%d%d%d", &S1, &S2, &T1, &T2);
    int box = S2;
    while (S1 <= T1){
        while (S2 <= T2){
            printf("%d x %d = %d\n", S1, S2, S1 * S2);
            S2++;
            if (S1 == T1 && S2 == box + 1){
                break;
            }
        }
        S2 = 1;
        S1++;
    }
    return 0;
}

#include <stdio.h>

void main(){
    int Gen1, Gen2, Gen3, Gen4;
    int S1, S2, S3, S4;
    int T1 = 0, T2 = 0, T3 = 0, T4 = 0;
    int N;
    int i = 1;
    int cnt = 0;
    int kon = 0;
    scanf("%d%d%d%d", &Gen1, &Gen2, &Gen3, &Gen4);
    scanf("%d", &N);
    while (i <= N){
        scanf("%d%d%d%d", &S1, &S2, &S3, &S4);
        if (S1 >= Gen1){
            cnt++;
            T1++;
        }
        if (S2 >= Gen2){
            cnt++;
            T2++;
        }
        if (S3 >= Gen3){
            cnt++;
            T3++;
        }
        if (S4 >= Gen4){
            cnt++;
            T4++;
        }
        if (cnt >= 3){
            printf("pass\n");
            kon++;
        }
        else if (cnt < 3){
            printf("fail\n");
        }
        cnt = 0;
        i++;
    }
    printf("%d\n%d %d %d %d", kon, T1, T2, T3, T4);
    return 0;
}

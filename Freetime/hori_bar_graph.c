#include <stdio.h>

void main(){
    int N;
    int i = 1;
    while (1){
        scanf("%d", &N);
        if (N <= 0){
            break;
        }
        while (i <= N){
            printf("*");
            i++;
            if (i > N){
                printf("\n");
            }
        }
        i = 1;
    }
    return 0;
}

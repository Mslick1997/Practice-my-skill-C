#include <stdio.h>

void main(){
    int N;
    int X, Y;
    int i = 1;
    scanf("%d", &N);
    while (i <= N){
        scanf("%d%d", &X, &Y);
        if (X <= Y){
            while (X <= Y){
                printf("%d ", X);
                X++;
                if (X > Y){
                    printf("\n");
                }
            }
        }
        else if (Y <= X){
                while (Y <= X){
                printf("%d ", Y);
                Y++;
                if (Y > X){
                    printf("\n");
                }
            }
        }
        i++;
    }
    return 0;
}

#include <stdio.h>

void main(){
    int start;
    int stop;
    int n;
    int i = 1;
    int i2 = 1;
    scanf("%d%d%d", &start, &stop, &n);
    if (start <= stop){
        while (start <= stop){
            printf("%d: ", start);
            while (i <= n){
                printf("%d ", start * i);
                i++;
                if (i > n){
                    printf("\n");
                }
            }
            i = 1;
            start++;
        }
    }
    else if (stop <= start){
        while (stop <= start){
            printf("%d: ", stop);
            while (i <= n){
                printf("%d ", stop * i);
                i++;
                if (i > n){
                    printf("\n");
                }
            }
            i = 1;
            stop++;
        }
    }
    return 0;
}

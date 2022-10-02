#include <stdio.h>

void main(){
    int start;
    int stop;
    int koon;
    int i = 1;
    scanf("%d %d %d", &start, &stop, &koon);
    if (start <= stop){
        while (start <= stop){
            printf("%d: ", start);
            while (i <= koon){
                printf("%d ", start * i);
                i++;
                if (i > koon){
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
            while (i <= koon){
                printf("%d ", stop * i);
                i++;
                if (i > koon){
                    printf("\n");
                }
            }
            i = 1;
            stop++;
        }
    }
    return 0;
}

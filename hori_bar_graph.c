#include <stdio.h>

void main(){
    int number, i = 1;
    while (1){
        printf("INPUT HERE : ");
        scanf("%d", &number);
        if (number == 0 || number < 0){
            break;
        }
        while (i <= number){
            printf("*");
            i++;
            if (i > number){
                printf("\n");
            }
        }
        i = 1;
    }
    return 0;
}

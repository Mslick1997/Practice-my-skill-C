#include <stdio.h>

void main(){
    int N;
    int i = 1;
    int i2 = 1;
    int i3 = 1;
    int i4 = 1;
    int tanny;
    int tanny2;
    scanf("%d", &N);
    tanny = N;
    tanny2 = N;
    while (i <= N && N <= 500){
        if (N >= 10){
            while (i2 <= tanny){
                printf("%d", tanny % 10);
                i2++;
                if (i2 > tanny){
                    printf("\n");
                    if (i == N){
                        break;
                    }
                    while (i3 <= N - (tanny2 - 1)){
                        printf(" ");
                        i3++;
                    }
                }
            }
        }
        else if (N <= 9){
            while (i2 <= tanny){
                printf("%d", tanny);
                i2++;
                if (i2 > tanny){
                    printf("\n");
                    if (i == N){
                        break;
                    }
                    while (i3 <= N - (tanny2 - 1)){
                        printf(" ");
                        i3++;
                    }
                }
            }
        }
        tanny = tanny - 1;
        tanny2--;
        i2 = 1;
        i3 = 1;
        i++;
    }
    return 0;
}

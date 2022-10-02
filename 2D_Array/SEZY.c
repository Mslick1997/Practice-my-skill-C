#include <stdio.h>

void main(){
    int N;
    scanf("%d", &N);
    int nR, nJ;
    int i = 1;
    while (i <= N){
        scanf("%d %d", &nR, &nJ);
        if (nR <= nJ){
            while (nR <= nJ){
                printf("%d ", nR);
                nR++;
                if (nR > nJ){
                    printf("\n");
                }
            }
        }
        else if (nR >= nJ){
            while (nR >= nJ){
                printf("%d ", nJ);
                nJ++;
                if (nR < nJ){
                    printf("\n");
                }
            }
        }
        i++;
    }
    return 0;
}

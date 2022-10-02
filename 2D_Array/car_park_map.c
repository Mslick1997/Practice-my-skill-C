#include <stdio.h>

void main(){
    int M, N;
    int K;
    scanf("%d %d", &M, &N);
    scanf("%d", &K);
    int kuu[100][100];
    int keb[100][100];
    int r = 1, c = 1;
    int i = 0, i2 = 1, i3 = 1, cnt = 0;

    //MAKE kuu[r][c] = 0;
    while (r <= M){
        while (c <= N){
            kuu[r][c] = 0;
            //printf("(%d)", kuu[r][c]);
            c++;
        }
        c = 1;
        r++;
    }
    //INPUT Car Position
    r = 1, c = 1, i3 = 1;
    while (i3 <= K * 2){
        scanf("%d", &keb[r][c]);
        //printf("(%d)", keb[r][c]);
        c++;
        i3++;
    }
    //MAKE Car Position = 1;
    r = 1, c = 1, i3 = 1;
    while (i3 <= K){
        kuu[keb[r][c]][keb[r][c + 1]] = 1;
        //printf("(%d %d)", keb[r][c], keb[r][c+1]);
        c += 2;
        i++;
        i2++;
        i3++;
    }

    //CHECK (1,0)
    /*r = 1, c = 1, i3 = 1;
    while (r <= M){
        while (c <= N){
            printf("%d", kuu[r][c]);
            c++;
        }
        c = 1;
        r++;
    }*/
    r = 1, c = 1, i3 = 1;
    while (r <= M){
        while (c <= N){
            if (kuu[r][c] == 1){
                printf("x");
            }
            else if(kuu[r][c] == 0){
                printf("_");
            }
            c++;
            if (c > N){
                printf("\n");
            }
        }
        c = 1;
        r++;
    }
    //printf("%d", kuu[2][3]);
    return 0;
}

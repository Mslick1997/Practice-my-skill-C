#include <stdio.h>

void main(){
    int n1, n2, n3, n4;
    int m1, m2, m3, m4;
    int cnt = 0;
    int i, i2, i3, i4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    if (n1 <= m1){
        cnt++;
        i = 1;
        printf("%d ", i);
    }
    if (n2 <= m2){
        cnt++;
        i2 = 2;
        printf("%d ", i2);
    }
    if (n3 <= m3){
        cnt++;
        i3 = 3;
        printf("%d ", i3);
    }
    if (n4 <= m4){
        cnt++;
        i4 = 4;
        printf("%d ", i4);
    }
    else if (n1 > m1 && n2 > m2 && n3 > m3 && n4 > m4){
        printf("0");
    }
    if (cnt >= 3){
        printf("\npass");
    }
    else if (cnt < 3){
        printf("\nfail");
    }
    //printf("%d", cnt);
    return 0 ;
}

#include <stdio.h>
void main(){
    int K, number, cnt_num = 0, cnt_han = 0, sum = 0;
    scanf("%d", &K);
    while (1){
        scanf("%d", &number);
        if (number == 0){
            break;
        }
        if (number != 0){
            cnt_num++;
        }
        if (number % K == 0 && number > 0){
            cnt_han++;
            sum += number;
        }
    }
    printf("%d\n%d\n%d", cnt_num, cnt_han, sum);
    return 0;
}

#include <stdio.h>

double average(int N[8]){
    int i = 0;
    double sum = 0;
    double avg;
    while (i < 8){
        sum += N[i];
        i++;
    }
    avg = sum / 8;
    return avg;
}

double variance(int N[8], double avg){
    int i = 0;
    double sumVAR = 0;
    while (i < 8){
        sumVAR = sumVAR + (N[i] - avg) * (N[i] - avg);
        i++;
    }
    sumVAR = sumVAR / (8 - 1);
    return sumVAR;
}

void main(){
    int N[8];
    int i = 0;
    double avg;
    while (i < 8){
        scanf("%d", &N[i]);
        i++;
    }
    avg = average(N);
    printf("%.2lf %.2lf", avg, variance(N, avg));
    return 0;
}

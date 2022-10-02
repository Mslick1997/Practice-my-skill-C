#include <stdio.h>

double average(int number[99], int N){
    int i = 0;
    double sum = 0;
    while (i < N){
        sum += number[i];
        i++;
    }
    sum /= N;
    return sum;
}

double variance(int number[99], double avg, int N){
    int i = 0;
    double sumV = 0;
    while (i < N){
        sumV += (number[i] - avg) * (number[i] - avg);
        i++;
    }
    sumV /= N - 1;
    return sumV;
}

void main(){
    int N; scanf("%d", &N);
    int number[99];
    int i = 0;
    double avg;
    double var;
    while (i < N){
        scanf("%d", &number[i]);
        i++;
    }
    avg = average(number, N);
    var = variance(number, avg, N);
    printf("%.2lf %.2lf", avg, var);
    return 0;
}

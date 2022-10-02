#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

int row, col;
for(row = 0; row < n; ++row) {
    for(col = 0; col < n; ++col) {
        if(col >= row) {
            printf("%d", (n - row)%10);
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
}
}

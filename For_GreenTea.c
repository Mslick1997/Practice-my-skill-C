#include <stdio.h>
void main(){
    int w, s, i, water, sugar;
    for (i = 1 ; i <= 7 ; i++){
        scanf("%d%d", &w, &s);
        water = w / 250;
        sugar = s / 15;
        if (w % 250 == 0 && s >= 15 && water <= sugar){
            if (water <= sugar){
                printf("%d\n", water);
            }
            else if (sugar <= water){
                printf("%d\n", sugar);
            }
        }
        else {
            if (water <= sugar){
                printf("%d water\n", water);
            }
            else if (sugar <= water){
                printf("%d water\n", sugar);
            }
        }
    }
    return 0;
}

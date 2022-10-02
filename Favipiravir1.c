#include <stdio.h>
void main(){
    int Fav, Jone, Namnak, Oxy;
    int OutFav = 0, OutJone = 0, TotalF, TotalJ;
    double Tem;
    scanf("%d%d%d%lf%d", &Fav, &Jone, &Namnak, &Tem, &Oxy);
    if (Tem >= 37.5 && Oxy < 90){
        OutFav = 3 * (Namnak / 1);
        OutJone = (4 * OutFav) + 120;
        TotalF = Fav - OutFav;
        TotalJ = Jone - OutJone;
        printf("%d %d\n%d %d", OutFav, OutJone, TotalF, TotalJ);
    }
    else if (Tem >= 37.5 && Oxy >= 90){
        OutFav = 2 * (Namnak / 1);
        OutJone = (4 * OutFav) + 120;
        TotalF = Fav - OutFav;
        TotalJ = Jone - OutJone;
        printf("%d %d\n%d %d", OutFav, OutJone, TotalF, TotalJ);
    }
    else if (Tem < 37.5 && Oxy < 90){
        OutFav = 2 * (Namnak / 1);
        OutJone = (4 * OutFav) + 120;
        TotalF = Fav - OutFav;
        TotalJ = Jone - OutJone;
        printf("%d %d\n%d %d", OutFav, OutJone, TotalF, TotalJ);
    }
    else {
        OutJone = 120;
        TotalF = Fav - OutFav;
        TotalJ = Jone - OutJone;
        printf("%d %d\n%d %d", OutFav, OutJone, TotalF, TotalJ);
    }
    return 0;
}

#include <stdio.h>

void main(){
    int country;
    printf("1 Sverige\n, 2 Danmark\n, 3 Norge\n, 4 Finland\n, 5 Island\n, 0 Resten\n");
    printf("Ange ditt land:");
    scanf(" %d", &country);

    if(country <= 0 || country >= 6)
        printf("Felaktig inmatning.\n");
    else if (country == 1 || country == 2 || country == 3)
        printf("Du bor i Skandinavien.\n");
    else 
        printf("inte bor i Skandinavien.\n");
}
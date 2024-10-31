#include <stdio.h>

void main(){
    int antal;
    printf("Ange hur många liter mjölk som finns kvar:");
    scanf(" %d", &antal);

    if(antal < 10)
        printf("Beställ 30 paket. \n");
    else if(antal > 10 && antal < 20)
        printf("Beställ 20 paket. \n");
    else
        printf("Du behöver inte beställa någon mjölk.\n");
}
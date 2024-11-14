#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    while(1){
        printf("1.Spela spel\n");
        printf("2.Se highscore\n");
        printf("3.Avsluta\n");
        int sel;

        scanf(" %d", &sel);

        if(sel == 1)
            printf("Spelet startar\n");
        else if(sel == 2)
            printf("Se highscore\n");
        else if(sel == 3)
            break;
    }

}
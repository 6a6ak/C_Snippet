#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    //Skapa ett program som skriver ut talen 0-10 på skärmen.
    for(int i = 0; i <= 10; i++)   {
        printf("%d\n",i);
    }

    int i = 0;
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }

    for(int i = 10; i >= 0; i = i -4 )   {
        printf("%d\n",i);
    }

}
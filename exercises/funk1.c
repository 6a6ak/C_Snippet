#include <stdio.h>
#include <stdbool.h>
#include "funk1.h"


void runFunc1(){
    int result = plussaTalMindre100( 50,90 );
    printf("50,90=%d\n", result);
    result = plussaTalMindre100( 150,90 );
    printf("150,90=%d\n", result);
    result = plussaTalMindre100( 150,190 );
    printf("150,190=%d\n", result);

    printf("Test\n");

}

int plussaTalMindre100(int tal1, int tal2){
    int result = 0;
    if(tal1 < 100){
        result += tal1;
    }
    if(tal2 < 100){
        result += tal2;
    }
    return result;
}
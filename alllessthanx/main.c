#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int tal;
    printf("Mata in ett tal: ");
    scanf(" %d", &tal);
    for(int i = tal-1; i >0; i-- )
        printf("%d\n",i);

}
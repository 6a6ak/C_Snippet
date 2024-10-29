#include <stdio.h>

void main(){
    int category;
    printf("1.vuxen\n2.pensionär\n3.student\n");
    printf("Ange din kategori:");
    scanf(" %d", &category);

    int cost;
    if (category == 2 || category == 3)
        cost = 20;
    else if(category == 1)
        cost = 30;
    printf("Resan kostar %d kr.\n",cost);
}
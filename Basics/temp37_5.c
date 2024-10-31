#include <stdio.h>

void main(){
    float temperatur;
    printf("Ange din temperatur:");
    scanf(" %f", &temperatur);
    printf("%f\n", temperatur);

    if(temperatur > 39.5)
        printf("Du bör uppsöka läkare. \n");
    else if(temperatur > 37.8)
        printf("Du har feber. \n");
    else if(temperatur < 37.8)
        printf("Du har inte feber.\n");


    if(temperatur > 37.8 && temperatur <= 39.5)
        printf("Du har feber. \n");
    else if(temperatur > 39.5)
        printf("Du bör uppsöka läkare. \n");
    else if(temperatur < 37.8)
        printf("Du har inte feber.\n");
}
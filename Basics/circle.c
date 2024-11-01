#include <stdio.h>

const double pi = 3.14159265358979323846;

void main(){
    float radie;
    float omkrets;

    printf("Ange omkrets:"); 
    scanf(" %f", &radie);

    omkrets = 2 * radie * pi;
    printf("Omkretsen blev:%f\n", omkrets);

    //Tre decimaler
    printf("Omkretsen blev:%.3f\n", omkrets);

}
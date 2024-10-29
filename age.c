#include <stdio.h>

void main(){
    int age;
    printf("Ange din ålder:");
    scanf(" %d", &age);

    if(age < 18)
        printf("Ej myndig. \n");
    else if(age > 65)
        printf("Pensionär. \n");
    else 
        printf("Myndig men ej pensionär.\n");


}
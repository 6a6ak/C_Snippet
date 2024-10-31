#include <stdio.h>

void main(){
    int tal;
    printf("Ange ett tal:");
    scanf(" %d", &tal);

    if(tal>10)
        printf("Talet är större än 10\n");
//    if(tal<10)
  //      printf("Talet är mindre än 10\n");
    else if(tal<10)
         printf("Talet är mindre än 10\n");
    
}
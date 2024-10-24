/*
Vad kostar hotellet per natt? 2200
Hur många nätter?3 
Det blir 6600kr
*/



#include <stdio.h>

// ANSI escape codes for text and background colors
#define RESET "\x1B[0m"
#define RED_TEXT "\x1B[31m"
#define GREEN_TEXT "\x1B[32m"
#define RED_BG "\x1B[41m"


int main()
{



    int rooms,night;
   int invoice = 230;
    
      printf("");
 printf(RED_BG RED_TEXT "-=[WELCOME TO HOTEL NACKADEMIN]=-" RESET "\n\n");

      printf("How many rooms you need: ");
      scanf("%d", &rooms);
  
      printf("How many night will stay: ");
      scanf("%d", &night);
      invoice = rooms*night*invoice;
      printf("For %d rooms %d nights need to pay \t %d Sek" ,rooms , night,invoice);

      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
}

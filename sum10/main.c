#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*
    Skapa ett program där användaren får mata in två tal.
    Låt sedan programmet skriva ut alla tal som finns mellan dessa två tal på skärmen.
    Lös detta med en for-loop.
    Lös den igen med en While-loop*/
    int start;
    int slut;
    printf("Start:");
    scanf(" %d", &start);
    printf("Slut:");
    scanf(" %d", &slut);

    if (start < slut)
    {
        for (int i = start; i <= slut; i++)
        {
            printf("%d\n", i);
        }

        int i = start;
        while (i <= slut)
        {
            printf("%d\n", i);
            i++;
        }
    }
    else
    { // start >= slut
      // 20         15
        for (int i = start; i >= slut; i--)
        {
            printf("%d\n", i);
        }

        int i = start;
        while (i >= slut)
        {
            printf("%d\n", i);
            i--;
        }
    }
}
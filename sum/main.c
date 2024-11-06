#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    while (1)
    {
        int tal1;
        int tal2;
        printf("Tal 1:");
        scanf(" %d", &tal1);
        printf("Tal 2:");
        scanf(" %d", &tal2);

        // int summa = tal1 + tal2;
        // printf("Summan blev %d\n", summa);

        printf("Summan blev %d\n", tal1 + tal2);

        printf("Viil du fortsätta(1=Ja, 0=Nej)?\n");
        int shouldContinue;
        scanf(" %d", &shouldContinue);
        if (shouldContinue == 0)
            break;
    }
}
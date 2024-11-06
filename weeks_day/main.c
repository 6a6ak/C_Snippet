#include <stdio.h>
#include <stdbool.h>

void main()
{
    int dag;
    printf("Ange dag 1 = måndag, 2 = tisdag etc etc");
    scanf(" %d", &dag);
    switch (dag)
    {
    case 1:
        printf("Måndag\n");
        break;
    case 2:
        printf("Tisdag\n");
        break;
    case 3:
        printf("Onsdag\n");
        break;
    case 4:
        printf("Torsdag\n");
        break;
    case 5:
        printf("Fredag\n");
        break;
    case 6:
        printf("Lördag\n");
        break;
    case 7:
        printf("Söndag\n");
        break;
    default:
        printf("Ogiltig dag\n");
    }
    printf("Klart\n");
}
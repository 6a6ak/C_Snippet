#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>  // Include the correct header file

int main(){
    srand(time(NULL));  // Seed the random number generator with current time
    while(1){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;

        printf("Rolling the dices...\n");
        printf("The values are...\n");
        printf("%d\n%d\n", dice1, dice2);

        printf("Roll the dices again? (y/n): ");
        char ch;
        scanf(" %c", &ch);
        if(ch != 'y')
            break;
    }
    return 0;  // Return statement outside the while loop
}

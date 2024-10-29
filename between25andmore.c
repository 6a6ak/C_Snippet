#include <stdio.h>
#include <stdbool.h>

void main(){
    int money;
    printf("Ange hur många kronor du har:");
    scanf(" %d", &money);
    
    bool hasRabatt;
    int rabattNum;
    printf("Har du rabatt? 1 = ja:");
    scanf(" %d", &rabattNum);
    hasRabatt = rabattNum == 1;
    // if(rabattNum == 1)
    //     hasRabatt = true;
    // else
    //     hasRabatt = false;

    // if(money >= 15 && money <= 25 && hasRabatt == false)
    //     printf("Du kan köpa en liten hamburgare.\n");
    // else if(money >= 15 && money <= 25 && hasRabatt == true)
    //     printf("Du kan köpa en liten hamburgare och en pommes frites.\n");
    //  else if(money > 25 && money <= 50 && hasRabatt == false)
    //     printf("Du kan köpa en stor hamburgare.\n");
    //  else if(money > 25 && money <= 50 && hasRabatt == true)
    //     printf("Du kan köpa en stor hamburgare och pommes frites.\n");
    //  else if(money > 60 ||  ( money >=50 && money <=60 && hasRabatt == true  ))
    //     printf("Du kan köpa ett meal med dryck.\n");


    // if(money >= 15 && money <= 25 && !hasRabatt)
    //     printf("Du kan köpa en liten hamburgare.\n");
    // else if(money >= 15 && money <= 25 && hasRabatt)
    //     printf("Du kan köpa en liten hamburgare och en pommes frites.\n");
    //  else if(money > 25 && money <= 50 && !hasRabatt)
    //     printf("Du kan köpa en stor hamburgare.\n");
    //  else if(money > 25 && money <= 50 && hasRabatt)
    //     printf("Du kan köpa en stor hamburgare och pommes frites.\n");
    //  else if(money > 60 ||  ( money >=50 && money <=60 && hasRabatt  ))
    //     printf("Du kan köpa ett meal med dryck.\n");

    if(money >= 15 && money <= 25){
        if(hasRabatt)
            printf("Du kan köpa en liten hamburgare och en pommes frites.\n");
        else
            printf("Du kan köpa en liten hamburgare.\n");
    }
    else if(money >= 25 && money <= 50){
        if(hasRabatt)
            printf("Du kan köpa en stor hamburgare och pommes frites.\n");
        else
            printf("Du kan köpa en stor hamburgare.\n");
    }
    else if(money > 60 || ( money >=50 && money <=60 && hasRabatt  ) )
        printf("Du kan köpa ett meal med dryck.\n");
}
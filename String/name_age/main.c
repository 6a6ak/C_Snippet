#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void main(){
    //String och int
    char *name = "Stefan"; // literal = text-segmentet
    int age = 50;

    printf("My name is %s and I am %d years\n",name,age );
    
    char name2[] = "Stefan"; // Skillnad = stackallokerad = read+write
    printf("My name is %s and I am %d years\n",name,age );


    //String och int 2
    char name3[50];
    int age3;
    printf("What's your name:");
    scanf(" %s", name3);
    printf("What's your age:");
    scanf(" %d", &age3);
    
    printf("Hi, %s you are %d years\n",name3,age3 );

    if(age3 > 50){
        printf("Wow you're old ;) \n" );
   }



    //FÖR OCH EFTERNAMN
     char fornamn[20];
     char efternamn[20];

     printf("Enter forname:");
     scanf(" %s", fornamn);
     printf("Enter surname:");
     scanf(" %s", efternamn);

     printf("Your name is %s, %s\n", efternamn, fornamn );



    //STRING ADDER
    char text1[20];
    char text2[20];
    char text3[20];

    char textTotal[62];
    printf("Enter text 1:");
    scanf(" %s", text1);
    printf("Enter text 2:");
    scanf(" %s", text2);
    printf("Enter text 3:");
    scanf(" %s", text3);

    strcpy(textTotal,text1 );
    strcat(textTotal," " );
    strcat(textTotal,text2 );
    strcat(textTotal," " );
    strcat(textTotal,text3 );

    printf("Result: %s and it's %d chars\n", textTotal, strlen(textTotal) );


    srand(time(NULL));
    //INMATNING
    bool runAgain = true;
    while(runAgain){
        int random_number = rand() % 20 + 1;
        printf("Nu blev det %d\n", random_number);

        char cont[10];
        while(1){
            printf("Vill du fortsätta Yes/No?");
            scanf(" %s", cont);
            if(!strcmp(cont,"No")){
                runAgain = false;
                break;                    
            }
            if(!strcmp(cont,"Yes")){
                runAgain = true;
                break;                    
            }
            printf("Yes or No please");
        }
    }



}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h"

void findFirst(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en text:",text, sizeof(text));
    GetInput("Ange en bokstav:",letterInput, sizeof(letterInput));
    char letter = letterInput[0];

    char *find = strchr(text,letter);
    if(find == NULL)
        printf("Det finns inget %c i texten du matade in",letter);
    else
        printf("Det första stället jag hittade %c på var position %d\n",letter, find-text);

}

void loopAll(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en text:",text, sizeof(text));
    GetInput("Ange en bokstav:",letterInput, sizeof(letterInput));
    char letter = letterInput[0];

    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == letter)
            count++;
    }
    if(count == 0)
        printf("Det finns inget %c i texten du matade in",letter);
    else
        printf("Jag hittade %c %d gånger\n",letter, count);

}

void replaceChar(){
    char text[] = "Detta är en sträng som du skall ändra";

    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            text[i] = '*';
    }
    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == '*')
            count++;
    }


    printf("Jag hittade %c %d gånger\n",'*', count);

}

void validate(){
    char text[100];
    char letterInput[2];

    GetInput("Ange en emailaddress:",text, sizeof(text));

    bool containsAt = strchr(text, '@');
    bool containsDot = false;
    bool okAfter = false;
    char *lastDot = strrchr(text, '.');
    if(lastDot){
        containsDot = true;
        int pos = lastDot - text;
        int after = strlen(text) - pos - 1;
        okAfter = after == 2 || after == 3;
    }
    if(containsAt && containsDot && okAfter){
        printf("Ok epost");
    }else{
        printf("Invalid epost");
    }
}


void wordCounter(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            count++;
    }
    int words = count+1;

    printf("Jag hittade %d ord\n", words);

}



void palindrom(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    char cleanedText[100];
    char cleanedTextBackwards[100];


    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        cleanedText[count] = tolower(text[i]);
        count++;
    }
    cleanedText[count] = 0;

    count = 0;
    for(int i = strlen(cleanedText)-1; i>=0 ;i--){
        cleanedTextBackwards[count] = cleanedText[i];
        count++;
    }
    cleanedTextBackwards[count] = 0;

    if(!strcmp(cleanedText,cleanedTextBackwards)){
        printf("palindrom");
    }
    else{
        printf("ej palindrom");
     }

}

void palindromSmarter(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    char cleanedText[100];

    int count = 0;
    for(int i = 0; i < strlen(text);i++){
        if(text[i] == ' ')
            continue;
        cleanedText[count] = tolower(text[i]);
        count++;
    }
    bool palindrom = true;
    for(int i = 0; i < strlen(cleanedText)/2+1;i++){
        if(cleanedText[i] != cleanedText[strlen(cleanedText)-1-i]){
            palindrom = false;
        }
    }
    if(palindrom)
        printf("palindrom");
    else
        printf("ej palindrom");

}

void capitalLetters(){
    char text[100];
    GetInput("Ange en text:",text, sizeof(text));

    bool beforeWasSpace = false;
    for(int i = 0; i < strlen(text);i++){
        if( i == 0 ||  beforeWasSpace){
            text[i] = toupper(text[i]);
        }
        beforeWasSpace = text[i] == ' ';

    }
    printf("%s\n",text);

}



void main(){
    // findFirst();
    // loopAll();
    // replaceChar();
    //validate();
    //wordCount();
    //palindrom();
    //palindromSmarter();
    capitalLetters();
}

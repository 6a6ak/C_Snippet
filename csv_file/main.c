#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
FILE *file;
file=fopen("data.csv", "r");
char line[1024];
while (fgets(line,sizeof(line),file)){

    char *token =strtok(line,",");
    int column =1;
    while (token !=NULL)
    {
        /* code */printf("Column %d %s", column,token);
        token =strtok(NULL, ",");
        column++;
    }
    
    //printf("");
}
{
    fclose(file);
    
    return 0;/* code */
}

}
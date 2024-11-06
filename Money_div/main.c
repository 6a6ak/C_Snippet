#include <stdio.h>
#include <stdbool.h>
int main()
{
    int money;
    printf("Insert Money Amount:");
    scanf(" %d", &money);
    int fivehd = money / 500;
    money = money % 500;
    int twohd = money / 200;
    money = money % 200;
    int onehd = money / 100;
    money = money % 100;
    int fiftees = money / 50;
    money = money % 50;
    int twentees = money / 20;
    money = money % 20;
    int tens = money / 10;
    money = money % 10;
    int one = money;
    printf("500:%d\n", fivehd);
    printf("200:%d\n", twohd);
    printf("100:%d\n", onehd);
    printf("50:%d\n", fiftees);
    printf("20:%d\n", twentees);
    printf("10:%d\n", tens);
    printf("1:%d\n", one);
    return 0;
}
// git problems not solved
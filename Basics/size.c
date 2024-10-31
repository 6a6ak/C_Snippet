#include <stdio.h>

void main(){
    // char, short int, int, long, float, double
    printf("char\t%d\t%d\n", sizeof(char), sizeof(char) * 8);
    printf("short\t%d\t%d\n", sizeof(short), sizeof(short) * 8);
    printf("int\t%d\t%d\n", sizeof(int), sizeof(int) * 8);
    printf("long\t%d\t%d\n", sizeof(long), sizeof(long) * 8);
    printf("llong\t%d\t%d\n", sizeof(long long), sizeof(long long) * 8);
    printf("float\t%d\t%d\n", sizeof(float), sizeof(float) * 8);
    printf("double\t%d\t%d\n", sizeof(double), sizeof(double) * 8);
}
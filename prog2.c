#include <stdio.h>
#include <stdbool.h>
int main(void) 
    {
    int a;
    float b;
    printf("Insert two numbers, integer and float, delimiter between numbers is space: ");
    if (scanf("%d %f", &a, &b)==2)
    {
        printf("Integer is %d\nfloat is %.3f\n", a, b);
    }
    else
    {
        printf("You write wrong numbers! Please, try again later.");
        return 1;
    }

    return 0;
}

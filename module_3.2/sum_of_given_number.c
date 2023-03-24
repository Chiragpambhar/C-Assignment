#include<stdio.h>

int main()
{

    int a = 1523;
    int b;
    int sum = 0;

    while (a > 0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    printf("Given number sum is : %d", sum);
    return 0;
}
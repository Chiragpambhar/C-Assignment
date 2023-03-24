#include<stdio.h>
int main()
{

    int a = 1234;
    int first;
    int last;
    int sum;
    last = a % 10;
    while (a >= 10)
    {
        a = a / 10;
    }
    first = a;
    sum = first + last;
    printf("Sum of first and last digit number : %d", sum);
    return 0;
}
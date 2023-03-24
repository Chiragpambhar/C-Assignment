#include <stdio.h>

int main()
{
    int a = 1;
    int b = 5;
    int c = 6;
    int d = 2;
    int max;

    if ((a > b) && (a > c) && (a > d))
    {
        max = a;
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        max = b;
    }
    else if ((c > a) && (c > b) && (c > d))
    {
        max = c;
    }
    else if ((d > a) && (d > b) && (d > c))
    {
        max = d;
    }
    printf("maximum number is : %d", max);
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\n%d,%d",a,b);
    for (int i = 2; i < num; i++)
    {
        c = a + b;
        printf(",%d", c);
        a = b;
        b = c;
    }
    return 0;
}
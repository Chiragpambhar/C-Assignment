#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter a any number :");
    scanf("%d", &a);

    for (b = 1; b <= 10; ++b)
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }
    return 0;
}
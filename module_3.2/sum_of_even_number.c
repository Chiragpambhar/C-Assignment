#include <stdio.h>

int main()
{

    int a;
    int sum = 0;
    for (int a = 1; a <= 10; a++)
    {
        printf("The integer value is: %d\n", a);
        if (a % 2 == 0)
        {
            sum += a;
        }
    }

    printf("sum of even number is: %d", sum);

    return 0;
}
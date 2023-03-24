#include <stdio.h>

int main()
{

    int ara[5] = {10, 20, 80, 50, 60};
    int length = sizeof(ara[5]);
    int max = ara[5];
    for (int i = 0; i <= length; i++)
    {
        if (ara[i] > max)
            max = ara[i];
    }
    printf("This array largest number is :%d", max);
    return 0;
}
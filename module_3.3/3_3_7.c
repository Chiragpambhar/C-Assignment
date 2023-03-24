#include <stdio.h>

int main()
{

    char name[] = "chirag pambhar";
    int length = 0;

    for (int i = 0; name[i] != 0; i++)
    {
        length++;
    }
    printf("This string length is : %d", length);
    return 0;
}
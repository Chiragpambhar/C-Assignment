#include <stdio.h>

int main()
{
    char i = 'A';
    char j = 'E';
    int k = 'A';
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf(" %c", k);
            k++;
        }
        printf("\n");
    }
}
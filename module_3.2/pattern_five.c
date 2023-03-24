#include <stdio.h>

int main()
{
     int c=1;

    for (int a = 1; a <= 5; a++)
    {
        for (int b = 1; b <= a; b++)
        {
         printf(" %d",c);
         c++;
        }
        printf("\n");
    }
    
    return 0;
}
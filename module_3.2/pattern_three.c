#include <stdio.h>

int main()
{
 
    for (int a = 1; a <= 5; a++)
    {
        for (int space = 1; space <= (5 - a); space++){
           printf("  ");
        }
        int c = (2 * a) - 1;
        for (int b = 1; b <= c; b++)
        {

            printf(" *");
        }

        printf(" \n");
    }
}
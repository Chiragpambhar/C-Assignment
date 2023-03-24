#include <stdio.h>

int main()
{

    int a[5];
    int b[5];
    int c;
    printf("Enter the value of fisrt array :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    //printf("Enter the value of second array :");
    //for (int k = 0; k < 5; k++)
    //{
      //  scanf("%d", &b[k]);
    //}
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("The  first array number is ascending order");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d,", a[i]);
    }
    printf("\nEnter the value of second array :");
    for (int k = 0; k < 5; k++)
    {
        scanf("%d", &b[k]);
    }
    for (int k = 0; k < 5; k++)
    {
        for (int n = k + 1; n < 5; n++)
        {
            if (b[k] > b[n])
            {
                c = b[k];
                b[k] = b[n];
                b[n] = c;
            }
        }
    }
    printf("\nThe  second array number is ascending order");
    for (int k = 0; k < 5; k++)
    {
        printf(" %d,", b[k]);
    }

}

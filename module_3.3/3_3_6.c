#include <stdio.h>
int main()
{

    int a1[3][3];
    int a2[3][3];
    int sum[3][3];
    int sub[3][3];
    int mul[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a value of[%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", a1[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a value of[%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", a2[i][j]);
        }
    }
    printf("\nsummation of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", sum[i][j]);
        }
    }
    printf("\nsubtraction of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = a1[i][j] - a2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", sub[i][j]);
        }
    }
    printf("\nmultiplication of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = a1[i][j] * a2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", mul[i][j]);
        }
    }
    return 0;
}
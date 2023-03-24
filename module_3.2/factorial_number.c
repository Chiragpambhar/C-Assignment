#include <stdio.h>
int main()
{

    int i=1;
    int fact = 1;
    int number; 

    printf("Enter a number : ");
    scanf("%d", &number);

    do{
        fact = fact * i;
        i++;

    }
    while(i<=number);
    printf("factorial of %d is : %d",number,fact);
    return 0;

}
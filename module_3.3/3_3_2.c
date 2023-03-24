#include<stdio.h>

int main(){

    int a;
    int b;
    int op;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter a first value :");
    scanf("%d",&a);
    printf("Enter a second value :");
    scanf("%d",&b);
    printf("Enter a operator :");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Addition of a and b is :%d",a+b);
        break;

        case 2:
        printf("Subtraction of a and b is :%d",a-b);
        break;

        case 3:
        printf("Multiplication of a and b is :%d",a*b);
        break;

        case 4:
        printf("Division of a and b is :%d",a/b);
        break;

        default:
        printf("Enter a valid operator");
        break;

    }
    return 0;
}
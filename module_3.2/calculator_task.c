#include<stdio.h>
  
  int main()
{
    int a;
    int b;
    char operator;
   float opration;

    printf("enter a operator:");
    scanf("%c",&operator);
    
    printf("enter first value :");
    scanf("%d",&a);

    printf("enter second value :");
    scanf("%d",&b);

    if(operator=='+'){
        opration=a+b;
        printf("%d and %d summation is %d",a,b,a+b);
    }
    else if(operator=='-'){
        opration=a-b;
        printf("%d and %d subsraction is %d",a,b,a-b);
    }
    else if(operator=='*'){
        opration=a*b;
        printf("%d and %d multiplication is %d",a,b,a*b);
    }
    else if(operator=='/'){
        opration=a/b;
        printf("%d and %d division is %d",a,b,a/b);
    } 
        else if(operator=='%'){
        opration=a%b;
        printf("%d and %d modulo is %d",a,b,a%b);
    }
    else    
    {
     printf("please enter valid operator");
     }
    return 0;

}
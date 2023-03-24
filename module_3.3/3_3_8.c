#include<stdio.h>

int main(){

    int a,b,num,sum=0;
     
    printf("Enter a any value :");
    scanf("%d",&num);

    a=num;

    while(num>0){
        b=num%10;
        sum=(sum*10)+b;
        num=num/10;
    }
    if(a==sum){
    printf("This number is palindrome number");
    }else{
        printf("This number is not palindrome number");
    }
    return 0;
}
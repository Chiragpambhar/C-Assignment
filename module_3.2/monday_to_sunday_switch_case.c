#include<stdio.h>

int main(){
    int day;
    printf("Enter a day number:");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        default:
        printf("This number is not valid");
        break;

    }
        return 0;

}
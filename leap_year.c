/*Any year is input through the keyboard. Write a program to determine
whether the year is a leap year or not.*/

#include <stdio.h>

int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d",&y);

    
    if(y%100==0){
        if(y%400==0){
            printf("It is a century leap year.");
        }
        else{
            printf("Not a leap year.");
        }
    }
    
    else{
        if(y%4==0){
            printf("It is a leap year.");
        }
        else{
            printf("Not a leap year.");
        }
    }
    printf("\n");
    return 0;
}

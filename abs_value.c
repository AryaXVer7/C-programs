/*Write a program to find the absolute value of a number entered through the keyboard.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=abs(n);
    printf("n=%d",a);
    printf("\n");
    return 0;
}

#include <stdio.h>

int main(){
    long n = 0;
    printf("Enter n: ");
    scanf("%ld", &n);
    long original_n = n;
    long rev = 0;
    if (n < 0){
        printf("Negative numbers can't be Palindro");
    }
    else{
        while (n > 0){
            long digit = n % 10;
            rev = (rev*10)+digit;
            n = n / 10;
        }
    }
    printf("\n");
    if (rev == original_n){
        printf("It is a Palindrome.");
    }
    else{
        printf("Not a Palindrome.");
    }
    return 0;
}
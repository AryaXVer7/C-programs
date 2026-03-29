#include <stdio.h>

int main(){
    long long n = 0;
    printf("Enter n: ");
    scanf("%lld", &n);
    long long rev = 0;
    if (n < 0){
        while (n < 0){
        long long lastdigit = n % 10;
        n = n / 10;
        rev = (rev*10)+lastdigit;
        }
        printf("Reverse digit: %lld", rev);
    }
    else{
        while (n > 0){
        long long lastdigit = n % 10;
        n = n / 10;
        rev = (rev*10)+lastdigit;
        }
        printf("Reverse digit: %lld", rev);
    }
    return 0;
}
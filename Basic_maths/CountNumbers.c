#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int count = 0;
    while (n > 0){
        n = n / 10;
        count++;
    }
    printf("Total digits: %d", count);
    return 0;
}
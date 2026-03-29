#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        for (int j = 1; j <= space; j++){
            printf(" ");
        }
        space -= 2;
        for (int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= n-i; j++){
            printf("*");
        }
        for (int j = 1; j <= 2*i; j++){
            printf(" ");
        }
        space -= 2;
        for (int j = 1; j <= n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
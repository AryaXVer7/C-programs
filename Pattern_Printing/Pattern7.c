#include <stdio.h>

int  main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = n; i  > 0; i--){
        for (int j = 0; j < n-i; j++){
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++){
            printf("*");
        }
        for (int j = 0; j < n-i; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
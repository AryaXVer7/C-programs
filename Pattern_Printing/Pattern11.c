#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }
        for (int j = 1; j <= space; j++){
            printf(" ");
        }
        for (int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
        space -= 2;
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n = 0;
    int num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", num);
            num += 1;
        }
        printf("\n");
    }
    return 0;
}
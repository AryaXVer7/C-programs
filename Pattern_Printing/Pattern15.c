#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int num = 65;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n-i+1; j++){
            printf("%c", j+num);
        }
        printf("\n");
    }
    return 0;
}
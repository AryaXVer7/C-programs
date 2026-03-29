#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (char ch = 'D'-i; ch <= 'D'; ch++){
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
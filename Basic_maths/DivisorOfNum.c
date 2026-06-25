#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
            if (n/i != i){
                printf("%d ", (n/i));
            }  
        }
    }
    return 0;
}
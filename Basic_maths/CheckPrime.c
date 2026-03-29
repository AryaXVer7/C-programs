#include <stdio.h>

int main(){
    int n = 0, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            count++;
        }
    }
    if (count == 2){
        printf("Prime.");
    }
    else{
        printf("Composite.");
    }
    return 0;
}
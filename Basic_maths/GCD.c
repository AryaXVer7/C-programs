#include <stdio.h>

int main(){
    int n1, n2;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    while(n2 != 0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    printf("GCD: %d", n1);
    return 0;
}
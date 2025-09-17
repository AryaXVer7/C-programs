#include <stdio.h>
int main()
{
    //Shopping Cart Program

    char item[50]="";
    int quantity=0;
    float price=0.0f;
    float total=0.0f;
    char currency='$';

    printf("what would u like to eat?:");
    fgets(item, sizeof(item), stdin);

    printf("how much would u like?:\n");
    scanf("%d",&quantity);

    printf("what is the price?:\n");
    scanf("%f",&price);

    total=price*quantity;
    
    printf("total price : %c %.2f",currency,total);

    return 0;
}

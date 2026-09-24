#include <stdio.h>
int main(void){
    int price, quantity, Totalcost;
    printf("Enter the price of your item:");
    scanf("%d", &price);
    printf("Enter the quantity of your item:");
    scanf("%d", &quantity);
    Totalcost = price*quantity;
    printf("The total cost of your items is: %d", Totalcost);
    return 0;
}

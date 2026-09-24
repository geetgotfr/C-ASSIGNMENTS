#include <stdio.h>
int main(void){
    int PRODUCT_ID, PRODUCT_PRICE, PRODUCT_QUANTITY, DISCOUNT;
    float SUBTOTAL, DISCOUNT_AMOUNT, FINAL_AMOUNT;  
    printf("Enter the product ID:");
    scanf("%d", &PRODUCT_ID);
    printf("Enter the product price:");
    scanf("%d", &PRODUCT_PRICE);
    printf("Enter the product quantity:");
    scanf("%d", &PRODUCT_QUANTITY);
    printf("Enter the discount percentage:");
    scanf("%d", &DISCOUNT);
    SUBTOTAL = PRODUCT_PRICE * PRODUCT_QUANTITY;
    DISCOUNT_AMOUNT = (SUBTOTAL * DISCOUNT) / 100;
    FINAL_AMOUNT = SUBTOTAL - DISCOUNT_AMOUNT;
    printf("The subtotal is: %.2f", SUBTOTAL);
    printf("\nThe discount amount is: %.2f", DISCOUNT_AMOUNT);
    printf("\nThe final amount to be paid is: %.2f", FINAL_AMOUNT);
    return 0;

}

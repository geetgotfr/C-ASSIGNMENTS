#include <stdio.h>
int main(void){
    int a, b, quotient, remainder;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    quotient = a/b;
    remainder = a%b;
    printf("The quotient of the two numbers is: %d", quotient);
    printf("\nThe remainder of the two numbers is: %d", remainder);
    return 0;
}

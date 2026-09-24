#include <stdio.h>
int main(void){
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("The two numbers are %d and %d", a, b);
    printf("\nThe two numbers swapped are %d and %d", b,a);
    return 0;
}

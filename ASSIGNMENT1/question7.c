#include <stdio.h>
int main(void){
    int a,b,c,d,e,total;
    float percentage;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    printf("Enter the fourth number:");
    scanf("%d", &d);
    printf("Enter the fifth number:");
    scanf("%d", &e);
    total = a + b + c + d + e;
    percentage = (total/500.00)*100;
    printf("The total of the five numbers is: %d", total);
    printf("\nThe percentage of the five numbers is: %f%%", percentage);
    return 0;
}

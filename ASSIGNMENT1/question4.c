#include <stdio.h>
int main(void){
    int a, b, c,;
    float average;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);
    average = (a+b+c)/3;
    printf("The average of the three numbers is : %f", average);
    return 0;

}

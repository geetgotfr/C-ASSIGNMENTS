#include <stdio.h>

int main(void) {
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nYOUR DETAILS\n");
    printf("-----------------\n");
    printf("Your age: %d\n", age);
    printf("Your height: %f\n", height);
    printf("Your grade: %c\n", grade);

    return 0;
}

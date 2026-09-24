#include <stdio.h>
int main(void){
    int basic_salary, bonus;
    float total_salary;
    printf("Enter the basic salary of the employee:");
    scanf("%d", &basic_salary);
    printf("Enter the bonus of the employee:");
    scanf("%d", &bonus);
    total_salary = basic_salary + bonus;
    printf("The total salary of the employee is: %.2f", total_salary);
    return 0;
}

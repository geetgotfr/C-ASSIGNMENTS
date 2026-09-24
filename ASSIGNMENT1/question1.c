include <stdio.h>

int main(void){
    char name[20];
    int age;
    int percentage;
    char grade;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nSTUDENT DETAILS\n");
    printf("-----------------\n");
    printf("Student name: %s\n", name);
    printf("Student age: %d\n", age);
    printf("Student percentage: %d\n", percentage);
    printf("Student grade: %c\n", grade);

    return 0;
}

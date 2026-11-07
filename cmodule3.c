/* question 1

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i == 1)
            printf("one\n");
        else if (i == 2)
            printf("two\n");
        else if (i == 3)
            printf("three\n");
        else if (i == 4)
            printf("four\n");
        else if (i == 5)
            printf("five\n");
        else if (i == 6)
            printf("six\n");
        else if (i == 7)
            printf("seven\n");
        else if (i == 8)
            printf("eight\n");
        else if (i == 9)
            printf("nine\n");
        else if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
    
question 2

#include <stdio.h>

int main(void) {
    int num;
    int steps = 0;

    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }

        steps++;
    }

    printf("%d\n", steps);

    return 0;
}
  
question 3

#include <stdio.h>

int main(void) {
    int num1, num2;
    int count = 0;

    scanf("%d %d", &num1, &num2);

    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}
    
question 4

#include <stdio.h>

int main(void) {
    int low, high;
    int count = 0;

    scanf("%d %d", &low, &high);

    for (int i = low; i <= high; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
    
question 5

#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
    
question 6

#include <stdio.h>

int main(void) {
    int x1, v1, x2, v2;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}*/
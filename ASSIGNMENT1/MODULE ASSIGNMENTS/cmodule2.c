/* question 1

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n == 1)
        printf("one");
    else if (n == 2)
        printf("two");
    else if (n == 3)
        printf("three");
    else if (n == 4)
        printf("four");
    else if (n == 5)
        printf("five");
    else if (n == 6)
        printf("six");
    else if (n == 7)
        printf("seven");
    else if (n == 8)
        printf("eight");
    else if (n == 9)
        printf("nine");
    else
        printf("Greater than 9");

    return 0;
}
    
question 2

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d\n", n);
    else
        printf("%d\n", n * 2);

    return 0;
}
    
question 3

#include <stdio.h>

int main(void) {
    int n, grade;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &grade);

        if (grade < 38) {
            printf("%d\n", grade);
        }
        else if (grade % 5 >= 3) {
            grade = grade + (5 - grade % 5);
            printf("%d\n", grade);
        }
        else {
            printf("%d\n", grade);
        }
    }

    return 0;
}
    
quesstion 4

#include <stdio.h>

int main(void) {
    int L, W, H;

    scanf("%d", &L);
    scanf("%d", &W);
    scanf("%d", &H);

    if (W < L || H < L) {
        printf("UPLOAD ANOTHER\n");
    }
    else if (W == H) {
        printf("ACCEPTED\n");
    }
    else {
        printf("CROP IT\n");
    }

    return 0;
}
    
question 5

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
    */
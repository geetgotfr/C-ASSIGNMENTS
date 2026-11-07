/*question1

#include <stdio.h>

int main(void) {
    int N;
    char S[1000];

    scanf("%d", &N);
    scanf("%999s", S);

    printf("%d\n", N * 2);
    printf("%s\n", S);

    return 0;
}

question 2

#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int sum = solveMeFirst(a, b);

    printf("%d\n", sum);

    return 0;
}

question 3

#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main(void) {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int result = sum(num1, num2);

    printf("%d\n", result);

    return 0;
}

question 4

#include <stdio.h>

int main(void) {
    int arrivalTime, delayedTime;

    scanf("%d %d", &arrivalTime, &delayedTime);

    int result = (arrivalTime + delayedTime) % 24;

    printf("%d\n", result);

    return 0;
}

    question 5

    #include <stdio.h>

int main(void) {
    int mainTank, additionalTank;
    int distance = 0;

    scanf("%d %d", &mainTank, &additionalTank);

    while (mainTank >= 5) {
        mainTank = mainTank - 5;
        distance = distance + 50;

        if (additionalTank > 0) {
            mainTank = mainTank + 1;
            additionalTank--;
        }
    }

    distance = distance + (mainTank * 10);

    printf("%d\n", distance);

    return 0;
}
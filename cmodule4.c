/*
question 1

#include <stdio.h>

int main(void) {
    int n, digit, sum = 0;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d\n", sum);

    return 0;
}
    
question 2

#include <stdio.h>

int main(void) {
    int t, n, temp, digit, count;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);

        temp = n;
        count = 0;

        while (temp > 0) {
            digit = temp % 10;

            if (digit != 0 && n % digit == 0) {
                count++;
            }

            temp = temp / 10;
        }

        printf("%d\n", count);
    }

    return 0;
}
    
question 3

#include <stdio.h>

int main(void) {
    int n, digit;
    int sum = 0;
    int product = 1;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        sum = sum + digit;
        product = product * digit;

        n = n / 10;
    }

    printf("%d\n", product - sum);

    return 0;
}
    
question 4

#include <stdio.h>

int main(void) {
    int n, temp, digit;
    int count = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        if (digit != 0 && n % digit == 0) {
            count++;
        }

        temp = temp / 10;
    }

    printf("%d\n", count);

    return 0;
}
    
question 5

#include <stdio.h>

int main(void) {
    int n, temp, digit;
    int reverse = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (n == reverse) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
    
question 6

#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    long long reverse = 0;

    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;

        reverse = reverse * 10 + digit;

        if (reverse > INT_MAX || reverse < INT_MIN) {
            printf("0\n");
            return 0;
        }

        n = n / 10;
    }

    printf("%lld\n", reverse);

    return 0;
}*/
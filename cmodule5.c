/*question 1

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("false\n");
        return 0;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    if (n == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
    
question 2

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("false\n");
        return 0;
    }

    while (n % 3 == 0) {
        n = n / 3;
    }

    if (n == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
    
question 3

#include <stdio.h>

int main(void) {
    int n;
    long long fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%lld\n", fact);

    return 0;
}
    
question 4

#include <stdio.h>

int main(void) {
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
    
question 5

#include <stdio.h>

int main(void) {
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
    
question 6

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n && n > 0)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}*/
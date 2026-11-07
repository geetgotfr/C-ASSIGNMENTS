/*question 1

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}

question 2

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int min = top;

            if (left < min)
                min = left;

            if (bottom < min)
                min = bottom;

            if (right < min)
                min = right;

            printf("%d", n - min);
        }

        printf("\n");
    }

    return 0;
}

*/
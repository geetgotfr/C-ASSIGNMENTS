/*q1

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q2

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q3
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q4
#include <stdio.h>
int main() {
int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
q5
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", i);
        }printf("\n");
    }
    return 0;
}
q6
#include <stdio.h>
int main() {
    int n, count = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", count++);
        }
        printf("\n");
    }
    return 0;
}
q7
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q8
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q9
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < i - 1; s++) printf(" ");
        for (int j = 0; j < 2 * (n - i) + 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q10
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
q11
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
q12
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > 1) printf(" ");
            printf("%d", i * j);
        }
        printf("\n");
    }
    return 0;
}
q13
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", (i + j) % 2 == 0 ? 'X' : 'O');
        printf("\n");
    }
    return 0;
}
q14
#include <stdio.h>
int main() {
    int n, count = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", count++);
        }
        printf("\n");
    }
    return 0;
}
q15
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int m = (n + 1) / 2;                 
    for (int i = 1; i <= n; i++) {
        int k = (i <= m) ? i : n - i + 1; 
        for (int j = 0; j < k; j++) printf("*");
        for (int s = 0; s < 2 * (m - k) + 1; s++) printf(" ");
        for (int j = 0; j < k; j++) printf("*");
        printf("\n");
    }
    return 0;
}
q16
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {                 
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {            
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}*/
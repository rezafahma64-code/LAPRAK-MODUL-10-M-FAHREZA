#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            printf("%d", fibonacci(i));
            if (i < n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}

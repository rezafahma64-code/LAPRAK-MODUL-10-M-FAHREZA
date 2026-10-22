#include <stdio.h>

int hanoi(int n) {
    if (n == 1) {
        return 1;
    }
    return 2 * hanoi(n - 1) + 1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, hanoi(n));
    }
    return 0;
}
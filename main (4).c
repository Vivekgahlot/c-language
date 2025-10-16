#include <stdio.h>

int main() {
    int m, n;

    printf("Enter starting number (m): ");
    scanf("%d", &m);

    printf("Enter ending number (n): ");
    scanf("%d", &n);

    while (m <= n) {
        printf("%d\n", m);
        m++;   
    }
    return 0;
}


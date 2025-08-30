#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i = 1;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (i <= n) {
        printf("%d ", a);   
        next = a + b;       
        a = b;              
        b = next;
        i++;
    }

    printf("\n");
    return 0;
}

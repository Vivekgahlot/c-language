#include <stdio.h>

int main() {
    int num, fact = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        fact = fact * i;   
        i = i + 1;         
    }

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}

#include <stdio.h>

int main() {
    int i;

    
    i = 1;
    printf("Even numbers from 1 to 100:\n");
    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\n");

    
    i = 1;
    printf("Odd numbers from 1 to 100:\n");
    while (i <= 100) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

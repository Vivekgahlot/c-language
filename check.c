#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 10) {
        printf("The number %d is greater than 10.\n", num);
    } else {
        printf("The number %d is not greater than 10.\n", num);
    }

    return 0;
}

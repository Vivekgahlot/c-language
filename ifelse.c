#include <stdio.h>
int main() {
    char ch;
    int a, b;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 's' || ch == 'S') {   
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swapping: a = %d, b = %d\n", a, b);
    } else {
        printf("Input is not matched.\n");
    }
    return 0;
}




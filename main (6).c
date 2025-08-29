#include <stdio.h>

int main() {
	int n, i;

	printf("Enter a number (1 to 10): ");
	scanf("%d", &n);

	if (n < 1 || n > 10) {
		printf("Please enter a number between 1 and 10.\n");
		return 0;
	}

	i = n;
	while (i <= 500) {
		printf("%d ", i);
		i = i + n;
	}

	return 0;
}

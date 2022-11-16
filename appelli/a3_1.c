#include <stdio.h>

int  divide (int n) {
	if (n < 10)
		return 1;
	
	return 10 * divide (n / 10);
}

int invert (int n) {
	int number = 0;
	
	while (n != 0) {
		int division = n%10;
		number += division * divide (n);
		n /= 10;
	}
	return number;
}

void main() {
	int n;

	printf("Valore n:");
	scanf ("%d", &n);

	int result = invert (n);
	printf("Function result: %d\n", result);
}
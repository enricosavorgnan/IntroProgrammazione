#include <stdio.h>

int iter_funct (int n) {
	int result, a_1, a_2 = 0;

	for (int i = 3; i <= n; i++) {
		if (a_1 > 2*a_2) {
			result = (a_2 + a_1 -1) * (i + 1);
			a_2 = a_1;
			a_1 = result;
			printf ("la successione per n = %d vale %d\n", i, result);
		} else {
			result = (a_2 - a_1 + 1) * (a_2 + 1) * (a_2 + 1);
			a_2 = a_1;
			a_1 = result;
			printf ("la successione per n = %d vale %d\n", i, result); } }
	
	return result; }

void main() {
	int n;

	printf ("Valore n:");
	scanf ("%d", &n);

	int result = iter_funct (n);
	printf ("Final result: %d\n", result); }
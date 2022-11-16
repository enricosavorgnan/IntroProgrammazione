#include <stdio.h>

int rec_fact (int n) {
	if (n == 1)
		return 1;
	return n * rec_fact (n-1);
}

int iter_fact (int n) {
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	return fact;
}

void main ()
{
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	int rec_result = rec_fact (n);
	int iter_result = iter_fact (n);

	printf ("factorial n: %d, %d\n", rec_result, iter_result);

	if (rec_result == iter_result)
		printf ("true\n");
	else
		printf ("false\n");
}
#include <stdio.h>

float recur(int n)
{
	if (n == 0)
		return (1);

	return (1.0 / ((2*n + 1) * (2*n + 1)) + recur(n-1));
}

void main()
{
	int n;

	printf ("Valore n:");
	scanf ("%d", &n);

	float result = recur(n);
	printf ("result: %f\n", result);
}
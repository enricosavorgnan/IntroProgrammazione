#include <stdio.h>

int pow (int n)
{
	if (n == 0)
		return 1;
	
	return (2 * pow (n - 1));
}

int sum (int n)
{
	if (n == 0)
		return 0;

	return (n + sum (n - 1));
}

void main()
{
	int n;

	printf("Valore n:");
	scanf ("%d", &n);

	int result = pow(n) * sum(n);			//A	
	printf ("final result is: %d\n", result);
}
#include <stdio.h>

int prod (int n)
{
	if (n < 10)
		return n;

	return n%10 * prod (n / 10);
}

int iter (int n)
{
	int k = 1;

	while (n > 1)
	{
		k *= n%10;
		n /= 10;
	}

	return k;
}

void main()
{
	int n = 3234;

	int result = iter (n);
	printf ("%d\n", result);
} 
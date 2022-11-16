#include <stdio.h>

int function (int n)
{
	if (n < 10)
		return n;

	return (n%10 + function(n / 10));
}

void main()
{
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	int result = function (n);
	printf ("value result: %d\n", result);
}
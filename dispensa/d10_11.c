#include <stdio.h>

int rec_gcd (int a, int b) {
	if (a == b)
		return a;
	if (b > a)
		return rec_gcd (a, b - a);
	return rec_gcd (b, a - b);
}

void main ()
{
	int a, b;

	printf ("a value:");
	scanf ("%d", &a);

	printf ("b value:");
	scanf ("%d", &b);

	int result = rec_gcd (a, b);
	printf ("gcd (%d, %d): %d\n", a, b, result);
}
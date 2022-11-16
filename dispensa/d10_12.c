#include <stdio.h>

int gcd (int a, int b) {
	if ( a == b)
		return a;
	if (b > a)
		return gcd (a, b - a);
	return gcd (b, a - b);
}

int lcm (int a, int b) {
	return a * b / gcd (a, b);
}



void main ()
{
	int a, b;

	printf ("a value:");
	scanf ("%d", &a);

	printf ("b value:");
	scanf ("%d", &b);

	int result = lcm (a, b);
	printf ("lcm (%d, %d): %d\n", a, b, result);
}
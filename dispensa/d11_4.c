#include <stdio.h>
#include <math.h>

float serie (int n)
{
	if (n == 0)
		return (1);
	return (1.0 / pow (2*n + 1, 2) + serie (n-1));
}

void main()
{	
	int n;

	printf ("Valore n:");
	scanf ("%d", &n);

	float result = serie (n);
	printf ("La serie con n = %d vale: %f\n", n, result);
}
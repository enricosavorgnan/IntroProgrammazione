#include <stdio.h>

float pow_ric (int n)
{
	if (n == 0)
		return (1);

	return (2 * pow_ric (n-1));
}

float prod_iter (int a, int b)
{
	float x = 1.0;

	for (int i = a; i <= (b/2); i++)
		x = x / a * pow_ric(i);

	return (x - b);
}

void main()
{
	float a, b;

	printf("Valore a:");
	scanf ("%f", &a);
	
	printf ("Valore b:");
	scanf("%f", &b);

	float result = prod_iter (a, b);
	printf ("Final result is: %f\n", result);
}
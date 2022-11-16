#include <stdio.h>

float pow_k (int k, int i)
{
	if (i == 1)
		return k;
	return k * pow_k (k, i - 1);

}

float succession (int n, int k)
{
	if (n == 1)
		return pow_k (k, 1) / 3.0;
	 return n * pow_k (k, n + 1) / pow_k (3, n) + succession (n - 1, k);
}

void main()
{
	int n, k;

	printf ("Valore n:");
	scanf ("%d", &n);

	printf ("Valore k:");
	scanf ("%d", &k);

	float result = succession (n, k);
	printf ("Function result: %f\n", result);
}
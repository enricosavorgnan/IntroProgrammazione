#include <stdio.h>

int primenumber (int n, int k)
{
	k = n - 1;
	if (k  == 1)
		return (0);		//0 = primenumber; 1 = not primenumber
	if (n%k == 0)
		return (1);
	
	return (primenumber (n, k-1));
}

void main ()
{
	int n;
	int k = 0;

	printf ("Valore n:");
	scanf ("%d", &n);

	int result = primenumber (n, k);
	
	if (result == 0)
		printf ("%d è numero primo\n", result);
	else
		printf ("%d non è un numero primo\n", result);
}
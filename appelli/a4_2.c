#include <stdio.h>

int iter_function (int n)
{
	int result = 0;
	int a1 = -1;
	int a2 = 0;

	for (int i = 3; i <= n; i++)
	{
		if (a2 > a1)
		{
			result = (2*a1 - a2 + 1) * i;
			a1 = a2;
			a2 = result;
		}
			
		else
		{
			result = (2*i + a2 + 1) * a1;
			a1 = a2;
			a2 = result;
		}
	}

	return result;
}

void main()
{
	int n;

	printf ("Valore n:");
	scanf ("%d", &n);

	int final_result = iter_function (n);
	printf ("Final result: %d\n", final_result);
}
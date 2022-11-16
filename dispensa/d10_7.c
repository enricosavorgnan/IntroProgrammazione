#include <stdio.h>

int iter_function (int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	return (sum);
}

int recurs_function (int n)
{
	if (n == 1)
		return (1);
	
	return (n + recurs_function (n-1));			//B
}

void main ()
{
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	for (int i = 1; i <= n; i++) 
	{
		int iter_sum = iter_function (i);
		int recurs_sum = recurs_function (i);		//A
		int sum = i * (i + 1) / 2;

		if (iter_sum = recurs_sum && iter_sum == sum)
			printf ("Functions have the same result for i: %d, that is %d\n", i, sum);

		else
			printf ("Functions do not have the same result");
	}
}
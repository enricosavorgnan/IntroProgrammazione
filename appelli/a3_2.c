#include <stdio.h>

int succession (int n)
{
	int result;
	int a1 = 2;
	int a2 = 1;

	for (int i = 3; i <= n; i++)
	{
		if (a2%2 == 0)
		{
			result = (i - a2) * a1;
			a1 = a2;
			a2 = result;
		}

		else
		{
			result = (i - a1) * a2;
			a1 = a2;
			a2 = result;
		}
	}

	return result;
}

void main()
{
	int n;

	printf ("n valure:");
	scanf ("%d", &n);

	int result = succession (n);
	printf ("Function result: %d\n", result);
}
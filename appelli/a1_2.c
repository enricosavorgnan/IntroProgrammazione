#include <stdio.h>

int prod (int n)
{
	if (n == 2)
		return 3;

	return (2*n - 1) * prod (n - 1);	//D
}

int iter (int n)
{
	int s = 1;

	for (int i = 2; i <= n; i++)
		s *= (2*i -1);			//B

	return s;				//C
}

void main()
{
	int n;

	printf("Value n:");
	scanf("%d", &n);

	int result = prod (n);			//A
	int resul2 = iter (n);
	printf ("final result is: %d\n", result);
	printf ("final result is: %d\n", resul2);

}
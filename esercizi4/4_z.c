#include <stdio.h>
#include <math.h>

float mu (int n)	//funzione che calcola la media operatoria tra n valori
{
	float m = 0;
	
	for (float i = 1; i <= n; i++)
		m += i;

	return (m / n);
}

float sigma (int n)
{
	float s = 0;
	
	for (float j = 1; j <= n; j++)
	{
		s += pow(j - mu (j), 2);
		printf ("part_result: %f\n", s);
	}
	
	return sqrt (s / n);
}

void main ()
{
	int n;

	printf ("Valore n:");
	scanf ("%d", &n);

	float result = sigma (n);
	printf ("result: %f\n", result);
}
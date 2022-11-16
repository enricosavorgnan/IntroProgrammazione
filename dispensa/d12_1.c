#include <stdio.h>  //not working - res always 2.16 -- why??

float mu (int v[], int dim)
{
	float sum = 0;
	for (int i = 0; i < dim; i++)
		sum += v[i];
	return sum / dim;
}

float var (int a[], int n)
{
	float sigma = 0.0;
	float media = mu (a, n);

	for (int i = 0; i < n; i++)
		sigma += (a[i] - media) * ( a[i] - media);
	
	return sigma / n;
}

void main ()
{
	int a[5] = {7, 9, 6, 10, 14};
	int dim = 5;

	float res = var (a, dim);
	printf ("%f\n", res);
}
#include <stdio.h>

/* void somma_armonica (int n, double* h)
 {
    if (n == 1)
        *h = 1;
    *h = 1 / (somma_armonica (n-1, h));
}

void main()
{
    int n;
    double h;

    printf ("n value:");
    scanf ("%d", &n);
    
    h = somma_armonica (n, &h);
} */

void somma_armonica (int n, double *h) {
	if (n == 1) *h = 1.0;
	else {
		somma_armonica (n-1, h);		// perché non &h???
		*h = 1.0 / n + *h; 
	}
}

void main() {
    int n;
    double h;

    printf ("n value:");
    scanf ("%d", &n);

    somma_armonica (n, &h);
	printf ("%lf\n", h); 
}
#include <stdio.h>
#include <math.h>

double serie (int n)
{
    double s0 = 0;

    for (int k = 0; k <= n; k++)
    {
        double sn = s0 + 1.0 / pow (2 * k + 1, 2);
        printf ("Serie (%d): %lf\n", k, sn);
        s0 = sn;
    }

    return s0;
}

void main()
{
    int n;
    printf ("Valore n:");
    scanf ("%d", &n);

    double a = serie (n);

    double i = pow (3.1415, 2) / 8;

    if (a = i && n >= 15)
        printf ("DAJE CI SIAMO\n");
}
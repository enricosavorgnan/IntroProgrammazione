#include <stdio.h>
#include <math.h>

void serie (int n, int k)                                    //OK
{
    double s1 = pow (k, 2) / 3;
    double sn = 0;

    for (int i = 2; i <= n; i++)
    {
        sn = s1 + (i * pow (k, i + 1) / pow (3, i) );
        s1 = sn;
    }

    printf ("Il risultato della serie è: %lf\n", sn);
}

void main ()
{
    int n, k;

    printf ("Valore n:");
    scanf ("%d", &n);

    printf ("Valore k:");
    scanf ("%d", &k);

    serie (n, k);
}
#include <stdio.h>
#include <math.h>

double successione (int n, int p)
{
    double s1 = p;
    printf ("Successione (1): %lf\n", s1);

    for (int i = 2; i <= n; i++)
    {
        s1 = ((s1 * s1 + p) / (2 * s1));
        printf ("Successione (%d): %lf\n", i, s1);
    }

    return s1;
}

void main()
{
    int n, p;

    printf ("Valore n:");
    scanf ("%d", &n);

    printf ("Valore p:");
    scanf ("%d", &p);

    double a = successione (n, p);
    double radp = sqrt (p);

    if (radp = a && n > 15)
        printf ("DAJE CI SIAMO\n");
    else
        printf ("1\n");
}
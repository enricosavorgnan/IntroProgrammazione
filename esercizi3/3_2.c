#include <stdio.h>
#include <math.h>

double distanza (double x1, double y1, double x2, double y2)
{
    double d = sqrt((y1 - y2) * (y1 - y2) + (x1 - x2) * (x1 - x2));
    return d;
}

void main()
{    
    double x1, x2, y1, y2;

    printf ("Valore x1:");
    scanf ("%lf", &x1);

    printf ("Valore x2:");
    scanf ("%lf", &x2);

    printf ("Valore y1:");
    scanf ("%lf", &y1);

    printf ("Valore y2:");
    scanf ("%lf", &y2);

    double dist = distanza (x1, x2, y1, y2);
    printf ("Distanza: %lf\n", dist);
}
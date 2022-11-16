#include <stdio.h>

void equal(double x, double y, double e) //OK
{
    double dif = y - x;
    
    if (x >= y)
        dif = x - y;

    if (dif < e)
        printf ("0\n");
    else
        printf ("1\n");
}

void main()
{
    double x, y, e;

    printf ("Valore x:");
    scanf ("%lf", &x);

    printf ("Valore y:");
    scanf ("%lf", &y);

    printf ("Valore e:");
    scanf ("%lf", &e);

    equal (x, y, e);   
}

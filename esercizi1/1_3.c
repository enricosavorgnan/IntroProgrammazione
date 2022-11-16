#include <stdio.h>

void main()
{
    int x;
    int y;
    int z = 0;

    printf ("Valore x:");
    scanf ("%d", &x);

    printf ("Valore y:");
    scanf ("%d", &y);

    while (x != 0)
    {
        if (x%2 == 0)
        {
            z = z;
            x = x/2;
            y = y*2;
        }

        else
        {
            z = z + y;
            x = x/2;
            y = y*2;
        }
    }

printf ("Il prodotto è %d\n", z);
}   
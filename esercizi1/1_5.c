#include <stdio.h>

/*
void main()
{
    int x;
    int y;
    int z=0;

    printf ("Valore x:");
    scanf ("%d", &x);

    printf ("Valore y:");
    scanf ("%d", &y);

    if (x >= y)
    {
        while (z != 999)
        {
            printf ("Valore z:");
            scanf ("%d", &z);

            if (z != 999)
            {
                if (z >= x)
                {
                    x = z;
                }

                if (x > z && z >= y)
                {
                    x = x;
                }

                if (z < y)
                {
                    y = z;
                }
            }

            else 
            {
                x = x;
                y = y;
            }
        }

    printf ("MAX è %d\n", x);
    printf ("min è %d\n", y);
    }

    else 
    {
        while (z != 999)
        {
            printf ("Valore z:");
            scanf ("%d", &z);

            if (z != 999)
            {
                if (z >= y)
                {
                    y = z;
                }

                if (z < y && z >= x)
                {
                    x = x;
                }

                if (z < x)
                {
                    x = z;
                }
            }
            
            else
            {
                x = x;
                y = y;
            }
        }

    printf ("MAX è %d\n", y);
    printf ("min è %d\n", x);
    }
}
*/

void main()
{
    int n;
    int x, max, min;

    printf ("Valore n:");
    scanf ("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf ("Valore x:");
        scanf ("%d", &x);

        if (i == n)
        {
            max = x;
            min = x;
        }

        else 
        {
            if (x > max)
            {
                max = x;
            }

            if (x < min)
            {
                min = x;
            }
        }
    }

    printf ("max è %d\n", max);
    printf ("min è %d\n", min);
}
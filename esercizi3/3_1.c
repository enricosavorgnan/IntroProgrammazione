#include <stdio.h>

void min_tripl (int x, int y)
    {
        if (y > x)
        {   
            for (int w = 1; w <= y; w++)
            {
                if (x <= y && x <= w)
                {    
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, x);
                }

                if (y <= x && y <= w)
                {    
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, y);
                }
                
                if (w <= y && w <= x)
                {    
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, w);
                }
            }
        }

        else
        {
            for (int w = 1; w <= x; w++)
            {
                if (x <= y && x <= w) {
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, x); }
                
                if (y <= x && y <= w) {    
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, y); }

                if (w <= y && w <= x) {
                    printf ("minimo (%d, %d, %d): %d\n", x, y, w, w); }
            }
        }
    }

void main()
{
    int x;
    int y;
    int z;

    printf ("Valore x:");
    scanf ("%d", &x);
    
    printf ("Valore y:");
    scanf ("%d", &y);
    
    printf ("Valore z:");
    scanf ("%d", &z);

    if (x <= y && x <= z) {
        printf ("minimo (%d, %d, %d): %d\n", x, y, z, x); }

    if (y <= x && y <= z) {
        printf ("minimo (%d, %d, %d): %d\n", x, y, z, y); }

    if (z <= y && z <= x) {
        printf ("minimo (%d, %d, %d): %d\n", x, y, z, z); }

    
    min_tripl (x, y);
}



/*
int minimo tra tre (int a, int b, int c)
{
    int min;
    if (a <= b)
        min = a;
    else
        min = b;

    if (min >= c)
        min = c;

    return min;
}

void test (int a, int b)
{
    if (a <= b)
}
*/
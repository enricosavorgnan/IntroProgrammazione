#include <stdio.h>

void main()
{
    int x;
    int y;

    printf ("Valore x:");
    scanf ("%d", &x);

    printf ("Valore y:");
    scanf ("%d", &y);

    int MCD;
    
    while (x != y)
    {
        if (x < y)
        {
            x = x;
            y = y - x;
        }
        
        else 
        {
            y = y;
            x = x - y;
        }
    }

    MCD = x;
    
    printf ("MCD è %d\n", MCD);
}t
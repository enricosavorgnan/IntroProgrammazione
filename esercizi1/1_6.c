#include <stdio.h>

void main()
{
    int x;
    int n;
    int k = 1;

    printf ("Valore x:");
    scanf ("%d", &x);

    printf ("Valore n:");
    scanf ("%d", &n);
    
    for (int i = n; i >= 1; i = i-1)
    {
        k = k*x;    
    }

    printf ("x elevato alla n è %d\n", k);
}
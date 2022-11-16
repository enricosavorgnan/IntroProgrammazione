#include <stdio.h>

void main()
{
    int n;
    int k;
    int z = 1;
    int S = 0;    

    printf ("Valore n:");
    scanf ("%d", &n);

    printf ("Valore k:");
    scanf ("%d", &k);                    //A

    for (int i = 1; i <= n; i++)         //B
    {                                    //C
        z = z * k;
        S = S + z;
    }                                    //D

    printf ("Valore somma: %d\n", S);
}                                        //E
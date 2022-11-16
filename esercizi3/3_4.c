#include <stdio.h>

/*                                                            PARTE A - OK
void primenumber(int n)
{
    int x = 0;
    
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
            x = 1;
    }

    if (x == 0)
        printf ("%d è numero primo\n", n);
    else
        printf ("%d non è numero primo\n", n);
}

void main ()
{
    int n; 

    printf ("Valore n:");
    scanf ("%d", &n);

    primenumber (n);
} */

void primenumber_intv (int n)                                    // PARTE B - OK
{
    int k = 0;
    
    for (int i = 1; i <= n; i++)
    {
        int x = 0;

        for (int j = 2; j < i; j++)
        {
            if (i%j == 0)
                x = 1;
        }

        if (x == 0)
        {
            k += 1;
            printf ("%d è numero primo\n", i);                    //inutile quanto figo
        } 
        
        else
            printf ("%d non è numero primo\n", i);                //inutile quanto figo        
    }

    printf ("Il numero di numeri primi tra 1 e %d è: %d\n", n, k);            //FIGO E BASTA
}

void main ()
{
    int n; 

    printf ("Valore n:");
    scanf ("%d", &n);

    primenumber_intv(n);
}
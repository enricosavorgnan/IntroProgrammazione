#include <stdio.h>
#include <math.h>

long int base10 (long int bin)                  //OK
{
    long int dec = 0;
    int i = 0;

    while (bin != 0)
    {
        int mod = bin%10; 
        dec += mod * pow (2, i);
        bin /= 10;
        i++;
    }

    return (dec);
}

void main()
{
    long int bin;

    printf ("Valore numero in base 2:");
    scanf ("%ld", &bin);

    int dc = base10 (bin);
    printf ("%ld in base 2 equivale a %d in base 10\n", bin, dc);
}
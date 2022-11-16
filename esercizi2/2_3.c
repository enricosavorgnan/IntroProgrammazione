#include <stdio.h>

void main()
{
    int a;
    int b;

    printf ("Valore a:");
    scanf ("%d", &a);

    printf ("Valore b:");
    scanf ("%d", &b);                            //A

    if (b >= 0)
        printf ("%d è positivo\n", b);           //B
    else
        printf ("%d è negativo\n", b);

    if (a%2 == 0)
        printf ("%d è pari\n", a);
    else 
        printf ("%d è dispari\n", a);

    printf ("Somma: %d\n", a+b);                  //C

    if (a > 0 && b > 0)
        printf ("(+a) + (+b) = %d è val max\n", a+b);

    if (a > 0 && b < 0)
        printf ("(+a) + (-b) = %d è val max\n", a + (-b));

    if (a < 0 && b > 0)                           //D
        printf ("(-a) + (+b) = %d è val max\n", b + (-a));

    if (a < 0 && b < 0)
        printf ("(-a) + (-b) = %d è val max\n", (-a) + (-b));
}
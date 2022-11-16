#include <stdio.h>
  
/* void main()
{
    int n1;
    int n2;
    int n3;

    printf ("Valore n1:");
    scanf ("%d", &n1);

    printf ("Valore n2:");
    scanf ("%d", &n2);

    printf ("Valore n3:");
    scanf ("%d", &n3);

    float s;
    s = n1+n2+n3;
    float m;
    m = s/3;
   
    printf ("La media dei 3 numeri è %f \n", m);
        
}  */

void main()
{
    int x = -1;
    float somma = 0;
    int n = 0;

    while (x != 0)
    {
        printf ("Inserire valore x:");
        scanf ("%d", &x);
        somma = somma + x;
        if ( x != 0)
            n = n + 1;                                                               
    }
    printf ("Media è %f \n", somma/n);
}
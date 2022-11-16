#include <stdio.h>

void main()
{                                                        //A
    float x;                                             //B

    printf ("Valore x:");
    scanf ("%f", &x);        // %f perché e FLOAT!!

    if (x >= 0)                                          
    {                                                    //C
        printf ("%f è positivo\n", x);
        printf ("|x| è: %f\n", x);
    }

    else 
    {                                                    //D
        printf ("%f è negativo\n", x);
//   x = x*(-1); sta cosa non serve, aggiungi il "-" a "x" in :20    
        printf ("|x| è: %f\n", -x);
    }
}                                                        //E
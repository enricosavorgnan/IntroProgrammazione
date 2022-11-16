#include <stdio.h>

void main()                    //stato memoria:
{                                          //A
    int n;                       
    int F1 = 0;
    int F2 = 1;                            //B
    
    printf ("Valore n:");
    scanf ("%d", &n);

    if (n = 0)                           //C
        printf ("F: %d\n", n);      

    if (n = 1)                           
        printf ("F: 1\n");
    
    if (n != 0 && n != 1) 
    {                                     //D
        printf ("F(0): 0\n");
        printf ("F(1): 1\n");
        for (int i = 2; i <= n; i++)      //E
        {                                 //F
            int F3 = F2 + F1;
            F1 = F2;
            F2 = F3;
            printf ("F(%d): %d\n", i, F3); //G
        }
    }                                     //H
} 

/* 
void main()
{
    int Fib (int n)
    {
        int Fib2;
        
        for (int i = 2; i <= n; i++)
        { 
            int Fib0 = 0;
            int Fib1 = 1;
            int Fib2 = Fib1 + Fib0;

            Fib0 = Fib1;
            Fib1 = Fib2;

            printf ("F(%d): %d\n", i, Fib2);
        }

        return (Fib2);
    }

    int n1;

    printf("Valore n1:");
    scanf ("%d", &n1);

    int n = Fib (n1);
    printf ("Fibn = %d\n", n);
}
*/
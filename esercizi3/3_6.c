#include <stdio.h>

// FUNZIONE ITERATIVA
/*
double successione (int n)                                OK
{
    double a1 = 0.5;
    printf ("succ(1): %lf\n", a1);

    for (int i = 2; i <= n; i++)
    {
        a1 = (a1 + 1) / 2;
        printf ("succ(%d): %lf\n", i, a1);
    }

    return a1;
}

void main()
{
    int n;

    printf ("Valore n:");
    scanf ("%d", &n);

    double a = successione (n);
}
*/
    
// FUNZIONE RICORSIVA:

double successione (int n)                            //Funzione ricorsiva
{
    if (n == 1)                                       //caso base
        return 0.5;
    else
        return 0.5 * (successione (n - 1) + 1);       
}

void main ()
{
    int n;                                            //Valore per cui calcolare la serie

    printf ("Valore n:");
    scanf ("%d", &n);

    double risultato = successione (n);               //chiamata della funzione 
    printf ("Il risultato della serie è: %lf\n", risultato);
}
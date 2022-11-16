#include <stdio.h>

/*
    Stampare i quadrati perfetti da 1 a n
*/

void main()
{
    int n;

    printf ("Inserire valore di n:");
    scanf ("%d", &n);

    printf ("Ti stamperò il numero di quadrati perfetti fino a %d\n", n);
    
    for(int i=1; i<=n; i++) 
    {
        printf ("Il quadrato di %d è %d\n", i, i*i); 
    }        // non serve dichiarare un'altra variabile: il calcolo lo mettiamo direttamente DENTRO print
    
    for (int i=n; i>=1; i--)
    {
        printf ("Il quadrato di %d è %d\n", i, i*i);
    }
}
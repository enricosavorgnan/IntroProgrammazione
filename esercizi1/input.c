#include <stdio.h>

void main()
{
    int n;               //dichiaro una variabile intero//
    printf ("Inserisci un numero intero da tastiera");        //stampo numero su shell//
    scanf ("%d", &n);     //scanf=prende numer da shell, %d identifica la variabile come un intero, &n assegna il numero alla n//
    printf("Il valore inserito è \n%d" ,n);
}
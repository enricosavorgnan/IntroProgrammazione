#include <stdio.h> //Scrivere una funzione che dato un importo di denaro iniziale, un interesse annuo e un numero di anni permette di calcolare l’importo di denaro accresciuto degli interessi dopo il numero di anni passati.

float tax (float den, float intr, int year)
{
	float tot = den * (1 + intr/100.0);
	for (int i = 2; i <= year; i++)
		tot += (1 + intr/100.0); 
	return tot;
}

void main ()
{
	float den, intr;
	int year;

	printf ("den value:");
	scanf ("%f", &den);
	printf ("intr value:");
	scanf ("%f", &intr);
	printf ("year value:");
	scanf ("%d", &year);

	float res = tax (den, intr, year);
	printf ("Total amount of money after %d years is: %f\n", year, res);
}
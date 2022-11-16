//PUNTATORI con MCD

#include <stdio.h>

int mcd (int x, int y)
{
	while (x != y)
	{
		if (x < y)
			scambia (x, y)

		x = x - y;
	}
}

void scambia (int x, int y)
{
	int temp;				//A
	temp = x;
	x = y;
	y = temp;				//B
}						//C 


// se vedi la memoria sta funzione non ha senso!! Scambi i valori ai parametri di SCAMBIA, non a quelli di MCD!!! --> vedi dopo


int mcd (int x, int y)
{
	while (x != y)
	{
		if (x < y)
			scambia (&x, &y)

		x = x - y;
	}
}

void scambia (int *p, int *q)
{
	int temp = *p;				//Ab
	*p = *q;
	*q = temp;				//Bb
}						//Cb
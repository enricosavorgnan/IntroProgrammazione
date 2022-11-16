#include <stdio.h>			// OK

int sum (int j)				// il valore di j varia tra a e b come indicato nella funzione "suc"
{
	if (j == 0)				//condizione base
		return(0);
	
	return (j + sum (j - 1));		//return trovato per ricorsività			//A
}

int suc (int a, int b)
{
	int d = 0;				//variab. ausiliaria, restituirà il valore della sommatoria
	
	for (int i = a; i <= b; i++)		//ciclo "for" con valori da A a B, scelti dall'utente
		d = d + sum(i);
	
	return d;
}

void main()
{
	int a, b;

	printf ("Valore a:");
	scanf ("%d", &a);

	printf ("Valore b:");
	scanf ("%d", &b);

	int final_result = suc (a, b);
	printf ("Final result is: %d\n", final_result);	
}
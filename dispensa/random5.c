#include <stdio.h> //Scrivere un programma C che stampi sullo standard output tutti i valori del triangolo di Tartaglia per un certo ordine N, utilizzando una funzione ricorsiva

int tart (int n, int pos)
{
	if (pos == 0 || pos == n+1) return 1;
	return tart (n-1, pos) + tart (n-1, pos-1); 	//B
}

void main ()
{
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	for (int i = 0; i <= n; i++) {
		int numb = tart (n-1, i);		//A
		printf ("%d ", numb); }
}
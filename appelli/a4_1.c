#include <stdio.h>

/* int prime (int n, int i) {	
			//funz. ricorsiva per stabilire se n è primo rispetto a i
	if (n%i == 0) return 0;
	return 1 + prime (n, i-1); }	

int myfunction (int x, int y) {
	int k = 0; 	//var. conta # di numeri primi in [x,y]
	if (x > y) {	//condizione sugli estremi dell'intervallo: voglio sempre x <= y
		int temp = x;
		x = y;
		y = temp; }
	
	for (int i = x; i <= y; i++) {
		int number = prime (i, i - 1);		
			//var. conta # di volte per cui un numero è primo rispetto ad un altro
		if (number == i-2) k += 1; }
			//n può essere primo al più rispetto a n-2 numeri (esclusi: 1, n) 
	return k; }

void main() {
	int x, y;
	printf ("Valore x:");
	scanf ("%d", &x);	
	printf ("Valore y:");
	scanf ("%d", &y);
	int result = myfunction (x, y);
	printf ("Final result: %d\n", result); }   */


int prime (int n, int i) {	
			//funz. ricorsiva per stabilire se n è primo rispetto a i
	if (n%i == 0 && i != 1) return 0;
	if (i == 1) return 1;
	return prime (n, i-1); }	

int myfunction (int x, int y) {
	int k = 0; 	//var. conta # di numeri primi in [x,y]
	
	if (x > y) {	//condizione sugli estremi dell'intervallo: voglio sempre x <= y
		int temp = x;
		x = y;
		y = temp; }
	
	for (int i = x; i <= y; i++) {
		k += prime (i, i - 1); }	
			//var. conta # di volte per cui un numero è primo rispetto ad un altro
	return k; }

int main() {
	int x, y;
	
	printf ("Valore x:");
	scanf ("%d", &x);	
	printf ("Valore y:");
	scanf ("%d", &y);
	
	int result = myfunction (x, y);
	printf ("Final result: %d\n", result); }
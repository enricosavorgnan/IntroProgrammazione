#include <stdio.h>

int rec_pow (int n, int k) {
	if (k == 1)
		return n;
	return n * rec_pow (n, k-1);
}

int iter_pow (int n, int k) {
	int pow = 1;
	for (int i = k; i >= 1; i--) {
		pow *= n; 	
	}
	return pow;
}

void interv_pow (int x, int y) {
	for (int i = x; i <= y; i++) {
		for (int j = x; j <= y; j++) {	
			int pow = rec_pow (i, j);
			printf ("coppia (%d, %d): %d\n", i, j, pow); 
		} 
	}
}

void main() {
	int n, k;

	printf ("Valore n:");
	scanf ("%d", &n);
	printf ("Valore k:");
	scanf ("%d", &k);

	int rec_result = rec_pow (n, k);
	int iter_result = iter_pow (n, k);

	printf ("pow (%d, %d): %d, %d\n", n, k, rec_result, iter_result);
	interv_pow (n, k);	
}
#include <stdio.h>

int rec_sum (int n) {
	if (n <= 9)
		return n;
	return n%10 + rec_sum (n/10);
}

int iter_sum (int n) {
	int sum = 0;
	int temp_n = n;
	
	for (int i = 1; i <= temp_n; i *= 10) {
		sum += n%10;
		n /= 10;
	}

	return sum;
}

int max_sum (int n, int k) {
	int max = 1;
	int j = n;
	
	for (int i = n; i <= k; i++) {
		int res = rec_sum (i);		
		if (res > max)
			max = res;
			j = i;
	}
	
	printf ("max value, for n = %d: %d\n", j, max);
}

void main () {
	int n, k;

	printf ("n value:");
	scanf ("%d", &n);

	printf ("k value:");
	scanf ("%d", &k);

	int rec_result = rec_sum (n);
	int iter_result = iter_sum (n);
	int max_result = max_sum (n, k);

	printf ("result: %d, %d\n", rec_result, iter_result);
}
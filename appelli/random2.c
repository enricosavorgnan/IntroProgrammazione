#include <stdio.h>

int equaldigit (int n) {
	int count = 0;
	
	while (n >= 10) {
		if (n%10 == ((n/10)%10)) {
			count += 1;
			n /= 10; } 
		else 
			n /= 10; }
	
	return count;
}

void main ()
{
	int n;
	
	printf ("n value:");
	scanf ("%d", &n);

	int result = equaldigit (n);
	printf ("%d\n", result);
}
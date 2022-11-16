#include <stdio.h>

int pot (int n, int i)
{
	if (i == 0) return 1;
	return n * pot (n, i-1);
}

int digit (int n)
{
	int count_digit = 0;
	while (n > 0)
	{
		count_digit++;
		n /= 10; }

	return count_digit;
}

int function (int n) {
	int result = 0;
	int tot = digit (n);
	
	while (n > 0) {
		if (tot%2 == 0) {
			result += pot (n%10, (n/10)%10);
			n /= 100; }
		else {
			n /= 10;
			tot--; } }
	return result; }

void main () {
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	int res = function(n);
	printf ("%d\n", res); }
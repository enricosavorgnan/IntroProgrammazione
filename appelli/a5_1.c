#include <stdio.h>

int is_inside (int x, int y, int z) {		//B
	if (y <= x && x <= z)
		return 0;
	return -1; }

int overlap_size (int i, int j, int t, int u) {
	int size = j - t + 1;
	for (int x = t; x <= j; x++)		//A
		size += is_inside (x, t, j);
	return size; }				//C

int main() {
	int i, j, t, u;
	int result;

	printf ("Valore i:");
	scanf ("%d", &i);
	printf ("Valore j:");
	scanf ("%d", &j);
	printf ("Valore t:");
	scanf ("%d", &t);
	printf ("Valore u:");
	scanf ("%d", &u);

	if (t > j || t > u || i > j) {
		printf ("Function impossible\n");
		return 0; }
	
	result = overlap_size (i, j, t, u);
	printf ("Size is: %d\n", result);
	
	return 1; }
#include <stdio.h>

float percent(float price, int discount)
{
	return (price * (100 - discount) / 100);
}

void main()
{
	float price;
	int discount;

	printf ("Value price:");
	scanf ("%f", &price);

	printf ("Value discount:");
	scanf ("%d", &discount);

	float final_price = percent (price, discount);
	printf ("Final price is: %f\n", final_price);
}
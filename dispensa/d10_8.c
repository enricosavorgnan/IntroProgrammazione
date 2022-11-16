#include <stdio.h>

void printing (int a, int b)				//OK
{	
	if (a%2 == 0) 
	{
		for (int i = a; i <= b; i += 2)		//B
			printf("%d\n", i);	
	}
	else
	{
		for (int i = a; i <= b; i += 2)		
			printf ("%d\n", i);		//C
	}
}

void main()
{
	int a, b;

	printf("Valore a:");
	scanf ("%d", &a);

	printf("Valore b:");
	scanf ("%d", &b);

	if (a < b)
		printing (a, b);			//A

	else
		printf ("Impossible\n");
}
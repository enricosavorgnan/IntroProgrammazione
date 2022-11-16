#include <stdio.h>

float function (int n)
{
	float result = 0;		//var. che memorizza il risultato della funzione
	float a0 = 1;			
	float a1 = 2;			//a0 e a1 var. ausiliarie inizializzate ai valori dei casi base

	if (n < 0)			//condizione che limita il dominio di function
	{
		printf ("Function result: IMPOSSIBLE");
		return 111;
	}
	
	if (n < 2)
		result = n + 1;		//casi "base"

	if (n >= 2)
	{
		for (int i = 2; i <= n; i++)	//ciclo iterativo per calcolare function
		{
			if (i%2 == 0)		//caso in cui la var. "i" sia pari
			{
				result = (i + 3 * (a0 - 2)) / a1;
				a0 = a1;
				a1 = result;
			}

			else			//caso in cui la var. "i" sia dispari
			{
				result = (i + 3 * (a1 - 2)) / a0;
				a0 = a1;
				a1 = result;
			}
		}
	}

	return result;
}
				
void main()
{
	int n;

	printf ("n value:");
	scanf ("%d", &n);

	float function_result = function (n);
	printf ("Function result: %f\n", function_result);
}
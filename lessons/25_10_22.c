/* FUNZIONE RICORSIVA

#include <stdio.h>

in generale:

fun (x)
{
    if (x = caso base)
        ...
    else
        return (f(x) + f(!=x))
}
*/

/* 
int fact (int n)                        //Example
{
    if (n == 0)
        return (1);
    else
        return (n * fact (n-1));
}

void main () //... valore di n, printi fact (n)
*/


/* EXAMPLE: a, b  && a < b : a , a+1 , a+2 ,  ... , b */

/* 
void f (int a, int b)
{
    for (i = a; i <=b; i++)
        printf ("i");
}

// Oppure

void f (int a, int b)
{
    if (a == b)
        printf (a);

    else
        printf (a);
        f(a+1, b);
} 
*/


/* EXAMPLE Fibonacci numbers */

#include <stdio.h>
 
int F(int i)
{
    if (i == 0)
        return (0);
    if (i == 1)
        return (1);

    return (F (i - 1) + F(i - 2));
}

void main()
{
    int i;

    printf ("i:");
    scanf ("%d", &i);

    int a = F(i);
    printf ("%d\n", a);
}
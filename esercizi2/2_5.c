#include <stdio.h>

int fact (int n)                          //OK!
    {                                    
        int nfac = 1;
        for (int i = 1; i <= n; i++)
        {                
            nfac *= i;                    //Bk
        }
        return nfac;
    }

void main()                 
{   
    int n;
    int k;
    int CB;

    printf ("Valore n:");
    scanf ("%d", &n);

    printf ("Valore k:");
    scanf ("%d", &k);                       //A             
    
    int nfac = fact (n);
    int kfac = fact (k);
    int zfac = fact (n-k);                  //B

    CB = nfac / (kfac * zfac);              //C
    
    printf ("CB è: %d\n", CB);
}

/* FUNZIONA, prova a fare con FUNZIONE!!
void main()
{
    int n;
    int k;
    int z;
    int CB;

    printf ("Valore n:");
    scanf ("%d", &n);

    printf ("Valore k:");
    scanf ("%d", &k);

    z = n - k;

    if (z > 0)
    {
        int nfac = 1;
        int kfac = 1;
        int zfac = 1;

        for (int i = 1; i <= n; i++)
        {
            nfac = nfac * i;
        }

        for (int j = 1; j <= k; j++)
        {
            kfac = kfac * j;
        }

        for (int l = 1; l <= z; l++)
        {
            zfac = zfac * l;
        }

        CB = nfac / (kfac * zfac);
    }

    else
        CB = 0;

    printf ("CB è: %d\n", CB);
}
*/

/*                RISOLUZIONE TUTOR
void main()

int nfact = n-kfact = kfact = 1;

for (int i = n; i >= 1; i--)
{
    if (i <= k)
        kfact *= i;
    if (i <= n-k)
        n-kfact *= i;
    else
        nfact *= i;     
}

poi uguale al resto, printando e scannando n e k
*/
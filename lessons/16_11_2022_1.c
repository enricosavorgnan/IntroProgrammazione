#include <stdio.h>
int member (int a, int x){
    if (a == x) return 0;
    return 1;
}

int pos (int a[], int dim, int x) {
    for (int i = 0; i < dim; i++){
        int f = member (a[i], x);
        if (f == 0) return i;
    }
    return dim;
}

void main(){
    int a[7] = {1, 3, 6, 2, 7, 8, 11};
    
    int x;
    printf ("x value:");
    scanf ("%d", &x);
    
    int res = pos (a, 7, x);
    if (res < 7) printf ("Trovato in pos %d\n", res+1);
    else printf ("Non trovato\n");
}
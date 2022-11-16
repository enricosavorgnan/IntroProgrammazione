#include <stdio.h>

int exist (int a[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (a[i] >= 0) return 1; }        //1 vero, 0 falso
    return 0;
}

int univ(int a[], int dim) {
    return (!exist (a, dim));
}

void main() {
    int a[5] = {-3, -2, 7, -1, -4};
    int cond = univ (a, 5);
    printf ("univ is %d\n", cond);
}
#include <stdio.h>
int main(){
    int a[5] = {7, 2, 3, 1, 3};
    int cond = 1;                //1 true, 0 false
    for (int i = 1; i < 5; i++) {
        if (a[i] > a[i-1]) {
            cond = 0;
            printf ("%d\n", cond);
            return 0; } }
    printf ("%d\n", cond);
    return 1; }
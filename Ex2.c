#include <stdio.h>

int main () {

    int n, r;

    r = 1;
    scanf ("%d", &n);

    while (n > 0) {  
        r = n * r;
        n = n - 1;
    };

    printf("%d", r);
    return 0;
}
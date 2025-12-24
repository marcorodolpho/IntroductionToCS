#include <stdio.h>
#include <stdbool.h>


int main () {
    
    int n, i;
    float h;
    h = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        h = h + 1/(float)i;
    }

    printf("%f", h);

   return 0;
}
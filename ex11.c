#include <stdio.h>
#include <stdbool.h>


int main () {
    
    int x, y, m, n, v, max;
    scanf("%d %d", &n, &m);

    v = max = 0;
    

    for (x = 0; x <= n; x++) {
        for (y = 0; y <= m; y++) {
            v = (x * y) - (x*x) + y;
            if (v > max) {
                max = v;
            }
        }
    }

    printf("%d", max);
    return 0;
}
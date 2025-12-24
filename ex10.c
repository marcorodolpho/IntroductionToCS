#include <stdio.h>

int main () {

    int k;
    float x, e, sen, t, abt;

    printf("Entre com valor para x: ");
    scanf("%f", &x);
    
    printf("Entre com valor para e > 0: ");
    scanf("%f", &e);

    t = abt = sen = x;

    for(k = 1; abt >= e; k++) {
        t = - t * x * x / ((2 * k) * (2 * k + 1));
        
        sen = sen + t;

        abt = t;

        if (abt < 0) {
            abt = -abt;
        }
    }

    printf("%f", sen);
    

    return 0;
}
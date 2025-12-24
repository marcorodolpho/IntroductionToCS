#include <stdio.h>

int main () {

    int n, cont, fn, f1, f2;
    cont = 0;
    f1 = 1;
    f2 = 1;
    
    scanf("%d", &n);
    
    if (n == 1 || n == 2) {
        fn = 1;
    } else {
        n = n - 2;
        while (cont != n)
        {
            cont += 1;
            fn = (f1 + f2);
            f1 = f2;
            f2 = fn;
        };
        
    };

    printf("%d %d %d %d", cont, f1, f2, fn);


    
    return 0;
}
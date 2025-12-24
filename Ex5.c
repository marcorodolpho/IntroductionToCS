#include <stdio.h>

int main () {
    
    int n, np, an, soma;
    scanf("%d", &n);
    np = (n/2);
    an = 2 + 2*(np - 1);
    soma = ((2 + an) * np) / 2;

    printf("%d", soma);
    return 0;
}
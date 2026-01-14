#include <stdio.h>

int main () {

    int n, k, r;

    printf("Digite o valor de N e o valor de K: ");
    scanf("%d %d", &n, &k);
    r = 1;


    while (k > 0) {
        k = k - 1;
        r = n * r;
    };

    printf("%d", r);


    return 0;   
}
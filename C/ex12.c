#include <stdio.h>
#include <stdbool.h>


int main () {
    
    int n, i, soma, count;
    bool state = true;
    scanf("%d", &n);
    soma = 0;

    for (i = 2; i <= n; i++) {
        state = true;
        for (count = 2; count * count <= i; count++) {
            if (i % count == 0) {
                state = false;
                break;
            }
        }
        if (state == true) {
            soma = soma + i;
        }
    }
  

    printf("%d", soma);
    return 0;
}
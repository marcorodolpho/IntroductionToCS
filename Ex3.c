#include <stdio.h>

int main () {

    int num, soma;
    soma = 0;
    scanf("%d", &num);
    
    while (num > 0) {
        soma = num + soma;
        num = num - 1;
    };

    printf("%d", soma);
    return 0;
}
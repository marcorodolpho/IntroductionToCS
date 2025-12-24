#include <stdio.h>

int main () {
    
    int n, nota, notamax, notamin, cont;

    cont = 0;
    scanf("%d %d", &n, &nota);
    
    if (nota >=0 && nota <= 100) {
        notamin = nota;
        notamax = nota;
        cont = 1;
    } else {
        printf("Nota inválida");
    };

    while (cont != n) {
        cont += 1;
        scanf("%d", &nota);

        if (nota >= 0 && nota <= 100) {
            if (notamax < nota) {
                notamax = nota;
            };
            if (notamin > nota) {
                notamin = nota;
            };
        };
    };


    printf("Nota max: %d, Nota min: %d", notamax, notamin);
    return 0;

}
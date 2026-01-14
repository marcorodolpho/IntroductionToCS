#include <stdio.h>
#include <stdbool.h>


int main () {
    
    int n, ant, suc;
    bool stt;
    scanf("%d", &n);
    stt = false;

    while (n != 0) {
        suc =  n % 10;
        ant = (n/10) % 10;

        if (suc == ant) {
            stt = true;
            break;
        } 
        n = n/10;
    }

    if (stt == true) {
        printf("Tem numeros iguais adjacentes");
    } else {
        printf("Não tem numeros iguais adjacentes");
    }
   return 0;
}
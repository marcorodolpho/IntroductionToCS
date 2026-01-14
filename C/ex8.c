#include <stdio.h>

int main () {

    int num, a, b, c, d, s1, s2, raiz;
    num = 9999;

    while (num > 1000) {
        d = num % 10;
        c = (num/10) % 10;
        b = ((num/10)/10) % 10;
        a = (((num/10)/10)/10) % 10;

        s1 = (a*10) + b;
        s2 = (c*10) + d;

        raiz = s1 + s2;

        if (raiz * raiz == num) {
            printf("%d\n", num);
            num = num - 1;
        } else {
            num = num - 1;
        }
    }



    return 0;
}
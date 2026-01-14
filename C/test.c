#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int conv (int x) {
    char *pL;
    char *pR;

    pL = (char*)&x;
    pR = pL + (sizeof(int) - 1);

    pL = pR = 0;

    return x;
}

int main () {
    int x;
    int res;


    printf("Entre com um x: ");
    scanf("%d", &x);

    res = conv(x);

    printf("%d", res);


    return 0;

}



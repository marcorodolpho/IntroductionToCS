#include <stdio.h>
#include <stdbool.h>


int main () {
    //otimize
    int p, count;
    bool cond = false;
    scanf("%d", &p);

    for (count = 1; p > 1 && count < 8; count++) {
        if (p % count == 0 && count != 1 && count != p) {
            cond = false;
        } else if (p % count != 0 || p == count) {
            cond = true;
        }
    }

    if (cond == false){
        printf("P eh primo");
    } else {
        printf("P nao eh primo");
    }

    return 0;
}
#include <stdio.h>

int main () {
    
    #define R 0.084;

    int num, r;
    scanf("%d", &num);
    
    while (num > 0){
        r = num / R;
        printf("%d\n", r);

        num--;
    }
    return 0;

}
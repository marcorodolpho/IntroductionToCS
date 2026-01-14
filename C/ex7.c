#include <stdio.h>

int main () {

    int a, b, c, prod, num;
    printf("Type the number: ");
    scanf("%d", &num);

    a = 1;
    b = 2;
    c = 3;
    prod = a * b * c;

    if (num != 0) {
        if (num < prod){
            printf("Nao triagular");
        } else if (num == prod) {
                printf("Tringular");
        } else if (num > prod) {
            while (num > prod) {
                a = b;
                b = c;
                c = c + 1;
                prod = a * b * c;
                
                if(num == prod) {
                    printf("Tringular");
                    break;
                } else if (num < prod) {
                     printf("Nao Tringular");
                    break;
                }
            }
        }
    }
    return 0;
}
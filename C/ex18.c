#include <stdio.h>

int main() {
    float v[100];
    int i, n;

    printf("Entre com 0<n<=100: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("v[%d] = %f\n", i, v[i]);
    }

    return 0;
}
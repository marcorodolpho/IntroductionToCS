#include <stdio.h>

int fatorial (int num) {
    int count, fat;
    fat = count = 1;
    
    if (num  < 0) return 0;

    while (count <= num)
    {
        fat = fat * count;
        count++;
    }

    return fat;
}

int comb (int n1, int n2) {
    int resultado;
    
    resultado = (fatorial(n1)) / (fatorial(n2) * (fatorial(n1 - n2)));

    return resultado;
}



int main () {
    int n, count, C;
    scanf("%d", &n);
    count = 0;

    while (count <= n)
    {
        C = comb(n, count);
        printf("%d \n", C);
        printf("C (%d, %d) \n", n, count);
        count++;
    }
    

    return 0;
}
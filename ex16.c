#include <stdio.h>

int main () {

    float soma , t , eps , x , abt ;
    int k ;
    
    printf ( "Entre com x: " ) ;
    scanf ( "%f" , &x ) ;
    
    printf ( "Entre com 0 < eps < 1: " ) ;
    scanf ( "%f" , &eps ) ;
    
    soma = abt = t = x ;
    if ( abt < 0) abt = -abt ;
    k = 1;
    
    while ( abt >= eps ) {
        t = -t * x * x / ((2* k )*(2* k+1));
        soma = soma + t ;
        k++;
        abt = t ;
            if (abt < 0) {
                abt = -abt;
            }
    }
    
     printf ( "sen(%f) = %f\n" , x , soma ) ;
    

    return 0;
}
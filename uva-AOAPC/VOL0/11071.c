#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long  a , b;
    while (scanf("%ld%ld", &a, &b) == 2){
        /* 1/2 * a * (t * 2)^2*/
        printf ("%ld\n",2 * a * b);
    }
    return 0;
}

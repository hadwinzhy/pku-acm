#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long long a , b;
    while (scanf("%lld%lld", &a, &b) == 2){
        printf ("%lld\n", (long long)fabs(b - a));
    }
    return 0;
}

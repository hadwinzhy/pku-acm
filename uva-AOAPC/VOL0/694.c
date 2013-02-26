#include <stdio.h>

int main(int argc, char *argv[])
{
    long n, L;
    int cases = 1;
    long originA = 0;
    while (scanf("%ld%ld", &n, &L) == 2)
    {
        originA = n;
        int count = 1;
        if (n < 0 || L < 0) continue;
        while (n != 1){
            if ( n % 2 == 0){ /*odd, n/2*/
                n = n /2;
            }else{
                n = n*3 +1;
                if (n > L)
                    break;
            }
            count ++;
        }
        printf ("Case %d: A = %ld, limit = %ld, number of terms = %d\n",cases, originA, L, count);
        cases ++;
    }
    return 0;
}

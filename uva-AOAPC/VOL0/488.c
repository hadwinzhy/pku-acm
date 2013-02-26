#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numOfCases;
    scanf("%d", &numOfCases);
    int i;
    for (i = 0; i < numOfCases; ++i)
    {
        int f, w;
        scanf("%d%d", &w, &f);
        if(w==0 && f==0) break;
        int m, n, p, count = 1;
        for(m = 0; m < f; m ++){ /* waves */
            count = 1;
            for ( n = 0; n < 2 * w; ++n) /* lines*/
            {
                for ( p = 0; p < count; ++p) /*how many weight*/
                {
                    printf ("%d",count);
                }
                (n+1 >= w) ? count --: count ++;
                if (count != 0)
                    printf ("\n");
            }
            if(m != f -1)
              printf ("\n");
        }
        if(i +1 != numOfCases)
            printf ("\n");
    }
    return 0;
}

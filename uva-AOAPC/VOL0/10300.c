#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numOfTests, i, j;
    scanf("%d", &numOfTests);
    for (i = 0; i < numOfTests; ++i)
    {
        int numOfFarms;
        long sum = 0;
        scanf("%d", &numOfFarms);
        for (j = 0; j < numOfFarms; ++j)
        {
            long x,y,z;
            scanf("%ld%ld%ld", &x, &y, &z);
            sum += x*z;
        }
        printf ("%ld\n",sum);
    }
    return 0;
}

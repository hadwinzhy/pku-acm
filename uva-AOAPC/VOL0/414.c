#include <stdio.h>

#define MAXN 25

int main(int argc, char *argv[])
{
    int n, i;
    while(scanf("%d\n", &n) == 1){
        if (n == 0) break;
        int lens[n], max = 0;
        char c;
        for (i = 0; i < n; ++i)
        {
            int count = 0;
            while((c = fgetc(stdin))!= '\n')
                if (c == 'X') count ++;

            lens[i] = count;
            if (count > max)
                max = count;
        }
        int result = 0;
        for (i = 0; i < n; ++i)
        {
            result += max - lens[i];
        }
        printf ("%d\n",result);
    }
    
    return 0;
}

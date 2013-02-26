#include <stdio.h>
#include <string.h>

#define MAXN 5000

int main(int argc, char *argv[])
{
    char buf[MAXN];
    int i;
    while(fgets(buf, sizeof(buf),stdin)!= NULL){
        int length = strlen(buf);
        for (i = 0; i < length -1 ; ++i){
            printf ("%c",buf[i]- 7);
        }
        printf ("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXN 1000

int main(int argc, char *argv[])
{
    char buf[MAXN];
    while(fgets(buf, sizeof(buf), stdin) != NULL){
        int i ,count = 0;
        int length = strlen(buf);
        int isalpha = 0;
        for(i = 0 ; i < length -1 ; i++){
            if(isalpha(buf[i])){
                if (!isalpha) {
                    count++;
                    isalpha = 1;
                }
            }else
                isalpha = 0;
        }
        printf ("%d\n",count);

    }
    return 0;
}

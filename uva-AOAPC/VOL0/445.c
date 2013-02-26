#include <string.h>
#include <stdio.h>

#define MAXN 5000

int main(int argc, char *argv[])
{
    char buf[MAXN];
    while(fgets(buf, sizeof(buf),stdin) != NULL){
        int length = strlen(buf);
        int i, j, sum = 0;
        for (i = 0; i < length; ++i)
        {
            char tmp = buf[i];
            if(tmp == '\n' || tmp == '!')
                printf ("\n");
            else{
                if(!isdigit(tmp)){
                    if(tmp == 'b')
                        tmp = ' ';
                    for(j = 0; j < sum; j++)
                        printf ("%c", tmp);
                    sum = 0;
                }else{
                    sum += tmp - '0';
                }
            }
        }
    }
    return 0;
}

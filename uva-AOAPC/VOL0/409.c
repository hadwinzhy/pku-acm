#include <stdio.h>

#define MAXN 1000

int main(int argc, char *argv[])
{
    char buf[MAXN][100];
    int col =0, row =0;
    char c;
    while( (c = fgetc(stdin)) != '\n'){
        buf[row][col] = c;
        row ++;
    }
    
    for(row = 0; row < MAXN; row++){
        for(col = 0; col < 100; col++){
            printf("%c",buf[row][col]);
        }
        printf("\n");
    }

    return 0;
}

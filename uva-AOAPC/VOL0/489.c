#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXN 1000

int isAllGuessed(char* guess, char* answer){
    int length = strlen(answer);
    int i;
    for (i = 0; i < length; ++i)
    {
        if(strchr(guess, answer[i]) == NULL)
            return 0;
    }
    return 1;
}

int getNumWrongGuess(char* guess, char *answer){
    int length = strlen(guess);
    char *wrongChar = (char*)malloc(sizeof(char)*length);
    int i, wrongNum = 0;
    char *found;
    for (i = 0; i < length; ++i)
    {
        if ((found = strchr(answer, guess[i])) == NULL){
            if(strchr(wrongChar, guess[i]) == NULL){
                wrongChar[wrongNum] = guess[i];
                wrongNum ++;
            }
        }
    }
    free(wrongChar);
    return wrongNum;
}


int main(int argc, char *argv[])
{
    int round;
    char guess[MAXN], answer[MAXN];
    while(1){
        scanf("%d", &round);
        if (round == -1) break;
        printf ("Round %d\n",round);

        scanf("%s%s", answer, guess);

        int numOfWrong = getNumWrongGuess(guess, answer);
        if(numOfWrong >= 7) printf ("You lose.\n");
        else{
            if(isAllGuessed(guess, answer)){
                printf ("You win.\n");
            }else 
                printf ("You chickened out.\n");
        }
    }
    return 0;
}

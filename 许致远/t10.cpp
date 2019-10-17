#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main()
{
    char words[101][52]={0};
    int i,cnt=0,j,k;
    char word[5100];
    char buff[52];
    i=0;j=0,k=0;
    gets(word);
    char*token=strtok(word," ");
    while(token!=NULL)
    {
        strcpy(words[i],token);
        token=strtok(NULL," ");
        cnt++;
        i++;
    }
    for(i = 0; i < cnt-1; i++)
    {
        j = i;
        for(k = i + 1; k < cnt; k++)
            if(strcmp(words[j], words[k]) > 0)
                j = k;
        if (j != i) {    
            strcpy(buff, words[i]);
            strcpy(words[i], words[j]);
            strcpy(words[j], buff);
        }
    }

    for(i = 0; i < cnt; i++)
    {
        if(strcmp(words[i], words[i+1])==0)
        {
            continue;
        }
        if(i!=cnt-1)
            puts(words[i]);
        else
            printf("%s",words[i]);
    }
 
    return 0;
}
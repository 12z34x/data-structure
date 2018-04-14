#include <stdio.h>
int main()
{
    char word[1000]={},newword[1000]={};
    int i,j;
    gets(word);
    for(i=0,j=0;word[i]!='\0';i++)
    {
        if(word[i-1]!=' '&&word[i]==' ')
        {
            newword[j]='\n';
            j++;
        }
        else
        {
            newword[j]=word[i];
            j++;
        }

    }
    puts(newword);
    return 0;
}
